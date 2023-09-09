// write a program to make simple calculator 
//(to make addition,subraction,multiplication,division,modulo)

#include<stdio.h>
int main()
{
int a=100;
int b=10;

printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,a/b);
printf("%d / %d = %d",a,b,a%b);

return 0;
}