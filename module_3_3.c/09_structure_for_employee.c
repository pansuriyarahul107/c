// 09.Write a program of structure for five employee that provides the following information.
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
    struct Emp E ={"Rahul",107,"Surat",26};
    printf("Emp name:%s\nEmp No:%d\nEmp Add:%s\nEmp Age:%d\n",E.E_name,E.E_no,E.E_address,E.E_Age);

   return 0;

}