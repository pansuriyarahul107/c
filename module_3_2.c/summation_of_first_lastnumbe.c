#include <stdio.h>
int main()
{
 int a,sum=0,firstdigit,lastdigit;

 printf("enter number to sum of first and last digit =");
 scanf("%d",&a);

 lastdigit = a % 10;

 while (a >= 10)
 {
    a = a / 10;
 }

 firstdigit = a;

 sum = firstdigit + lastdigit;

 printf("sum of first and last digit = %d",sum);

 return 0;
 

}