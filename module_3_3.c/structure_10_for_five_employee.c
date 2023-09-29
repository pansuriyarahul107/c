// 10.Write a program of structure for five employee that provides the following information.
//  print and display empno,empname,address and age.

#include <stdio.h>
struct Emp
{
    char E_name[10];
    int  E_no;
    char E_address[10];
    int  E_Age;
};

int main()
{
    struct Emp E1 ={"Rahul",107,"Surat",26};
    struct Emp E2 ={"Krunal",108,"Punagam",32};
    struct Emp E3 ={"Anil",109,"Katargam",39};
    struct Emp E4 ={"Nirav",110,"Bilimora",37};
    struct Emp E5 ={"Bhavesh",111,"MoraBhagal",33};

    printf("%s %d %s %d \n",E1.E_name,E1.E_no,E1.E_address,E1.E_Age);
    printf("%s %d %s %d \n",E2.E_name,E2.E_no,E2.E_address,E2.E_Age);
    printf("%s %d %s %d \n",E3.E_name,E3.E_no,E3.E_address,E3.E_Age);
    printf("%s %d %s %d \n",E4.E_name,E4.E_no,E4.E_address,E4.E_Age);
    printf("%s %d %s %d \n",E5.E_name,E5.E_no,E5.E_address,E5.E_Age);
    



    return 0;
}