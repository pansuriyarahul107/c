#include<stdio.h>
int main()
{
int number,Reminder,sum =0;
printf("\nplease enter any value:");
scanf("%d",&number);
while (number > 0)
{
   Reminder = number % 10;
   sum = sum + Reminder;
   number = number / 10;
}


printf("sum of Number = %d",sum);

return 0;

}


