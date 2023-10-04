//11. wap to show differance between structher and union.
#include<stdio.h>
struct Employee
{
  int age;
  char name[50];
  char Department[30];
  float Salary;
};
 
 union Person
 {
  int age;
  char name[50];
  char Department[20];
  float Salary; 
 };

 int main()
 {
   struct Employee emp1;
   union Person persone1;
   printf("\nthe size of Employee Structure = %d\n",sizeof(emp1));
   printf("the size of Person Union = %d \n",sizeof(persone1));

   return 0;

 }
 