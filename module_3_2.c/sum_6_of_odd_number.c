#include<stdio.h>
int main()
// sum of odd numbers wap to print table up to given number.

{
int i, number, sum=0;
printf("please enter max value :");
scanf("%d",&number);

printf("\n odd numbers between 0 and  %d are :",number);
for (i = 1; i <= number; i++)
{
    if (i % 2 == 0)
    {
        printf("%d",i);
        sum = sum + i;
    }
}
   printf("\n the sum of odd number from 1 to %d = %d",number,sum);
   
   return 0;

}