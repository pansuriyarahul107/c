/*Assume that the test results of a batch of 
students are stored in three different classes. 
Class Students are storing the roll number. 
Class Test stores the marks obtained in two subjects 
and class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance) 
*/
#include<iostream>
using namespace std;

class Student
{
	protected:
		int roll;
};

class Test:virtual public Student
{
	protected:
		int marks1,marks2;
		Test(int m1,int m2): marks1(m1),marks2(m2) {}	
		void show()
		{
			cout<<"The marks are "<<marks1<<" & "<<marks2<<endl;
		}
};

class Sports:virtual public Student
{
	protected:
		int score;
		Sports(int s):score(s) {}
		void show()
		{
			cout<<"Score = "<<score<<endl;
		}
};

class Result:public Test,Sports
{
	public:
	Result(int r,int m1,int m2,int s) : Test(m1,m2),Sports(s) 
	{
		roll = r;	
	}
	void show()
	{
		cout<<"Roll : "<<roll<<endl;
		Test::show();
		Sports::show();
		cout<<"Total Marks : "<<marks1+marks2+score<<endl;
	}
};

int main()
{	
	Result *r = new Result(4,90,95,75);
	r->show();
	return 0;	
}
