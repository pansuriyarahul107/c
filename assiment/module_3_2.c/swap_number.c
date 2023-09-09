#include<stdio.h>
int main()
{
//wap to swap two numers without using thrid variable.


 double a,b;
printf("enter a:");
scanf("%lf",&a);

printf("enter b:");
scanf("%lf",&b);


 (a = a - b);
 (b = a + b);
 (a = b - a);

 printf("After swapping  a= %.2lf\n",a);
 printf("After swapping b= %.2lf\n",b);







    return 0;
}