#include <stdio.h>
int main()

{
  // Monday to Sunday Useing switch case

    int day;
    printf("Enter day:");
    scanf("%d",&day);
     
  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  
  case 2:
    printf("Tuesday");
    break;

  case 3:
    printf("wednesday");
    break;
  
  case 4:
    printf("Thursday");
    break;
  
  case 5:
    printf("Firday");
    break;

  case 6:
    printf("Saturday");
    break;
  
  case 7:
    printf("Sunday");
    break;

  default:
  printf("Select correct opetion");
    break;
  }



}