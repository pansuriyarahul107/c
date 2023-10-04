#include <algorithm>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

class Utility
{
public:
    static void Log(const std::string& message)
    {
        std::cout << message << std::endl;
    }
};

class Event
{
    std::string name;
public:
    Event(const std::string& name) :name{ name }
    {
    }

    ~Event()
    {
    }
    const std::string& GetName() const
    {
        return name;
    }

    bool operator==(const Event & ev)
    {
        return this->name == ev.name;
    }

};

class EventHandler
{
public:
    EventHandler() {};
    virtual ~EventHandler() {};

    virtual void Execute() = 0;
    virtual void Execute(const std::string& str) = 0;

};

class ExecuteEventHandler : public EventHandler
{
public:

    ExecuteEventHandler() : EventHandler()
    {
    }
    ~ExecuteEventHandler()
    {
    }
    void Execute()
    {
        std::string msg = "ExecuteEventHandler::execute called";
        Utility::Log(msg);
    }

    void Execute(const std::string& str)
    {
        if (str.size() == 0)
            Execute();
        else
        {
            std::string msg = "ExecuteEventHandler::execute called with argument: " + str;
            Utility::Log(msg);
        }
    }

};
std::mutex gMu;

class EventManager
{
    std::unordered_map<Event*, std::vector<std::pair<EventHandler*, bool>>> eventAndHandler;
    void Remove(EventHandler* eh) {};

public:

    EventManager()
    {
    }

    ~EventManager()
    {
    }

    //Adds an Event with its corresponding EventHandler
    //bool execute indicates whether the handler should be executed
    //If the event exists just adds the EventHandler
    //Else creates a new entry

    void Add(Event* ev, EventHandler* eh, bool execute=true)
    {
        std::lock_guard<std::mutex> lock(gMu);
        //auto it = find_if(eventAndHandler.begin(), eventAndHandler.end(), [&](auto& e) 
        //{
        //  return e.first.Name == ev.Name;
        //});
        auto it = eventAndHandler.begin();
        for (; it != eventAndHandler.end(); ++it)
        {
            if (*it->first == *ev)
                break;
        }
        std::string msg;
        if (it != eventAndHandler.end())
        {
            it->second.push_back(std::make_pair(eh, execute));
            msg = "Adding an EventHandler to an existing event [" + it->first->GetName() + "]";
        }
        else
        {
            eventAndHandler[ev].push_back(std::make_pair(eh, execute));
            msg = "Adding a new event [" + ev->GetName() + "] with its EventHandler";
        }
        Utility::Log(msg);
    }

    //Invokes the EventHandlers for the given Event.
    //If the Event is not registered, does notthing
    //Also removes EventHanlders with disabled execution
    void Invoke(Event* ev, const std::string & arg = "")
    {
        std::lock_guard<std::mutex> lock(gMu);
        auto it = eventAndHandler.begin();
        for (; it != eventAndHandler.end(); ++it)
        {
            if (it->first == ev)
                break;
        }
        std::string msg;
        if (it != eventAndHandler.end())
        {
            msg = "Executing handlers for event [" + it->first->GetName() + "]:";
            Utility::Log(msg);
            for (auto iteh = it->second.begin(); iteh != it->second.end(); )
            {
                if ((*iteh).second)//check if the handler should be executed :)
                {
                    (*iteh).first->Execute(arg);
                    ++iteh;
                }
                else
                {
                    iteh = it->second.erase(iteh); //Remove the dont execute handlers
                    msg = "Removing a do not execute handler for event [" + it->first->GetName() + "]:";
                    Utility::Log(msg);
                    if (iteh == it->second.end())
                        break;
                }
            }
        }
        else
        {
            msg = "Event [" + ev->GetName() + "] is not registered";
            Utility::Log(msg);
        }
    }

};

int main()
{

    EventManager evMgr;
    Event evEmail{ "email" }, evEmail2{ "email2" }, evEmail3{ "email3" };
    ExecuteEventHandler execute, execute2, execute3, execute4;

    ExecuteEventHandler dontExecute, dontExecute2;

    evMgr.Add(&evEmail, &execute);
    evMgr.Add(&evEmail, &dontExecute, false); //false indicates do not execute the handler
    evMgr.Add(&evEmail, &dontExecute2, false);
    evMgr.Add(&evEmail, &execute2);

    //Invoking email without argument
    evMgr.Invoke(&evEmail);

    //Invoking email with argument
    evMgr.Invoke(&evEmail, "this is email content");


    evMgr.Add(&evEmail2, &execute4);
    evMgr.Add(&evEmail2, &dontExecute2); //Registering dontExecute2 with email2 and it will be executed

    evMgr.Invoke(&evEmail2);

    //Invoking not registered event email3
    evMgr.Invoke(&evEmail3);

}