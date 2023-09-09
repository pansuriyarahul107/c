#include<stdio.h>
int main()
{
// wap make simple calculator (addition,subtraction,multiplicaton,division and modulo)

int rahu,ketu,addition,subtration,multiplication;
float divide, modulo;

printf("Enter value rahu \n");
scanf("%d",&rahu);

printf("Enter value ketu \n");
scanf("%d",&ketu);

addition = rahu + ketu ;
subtration = rahu - ketu ;
multiplication = rahu * ketu ;
divide = rahu / (float) ketu ;
modulo = rahu %  ketu ;


printf("Addition = %d\n",addition);
printf("Subtration = %d\n",subtration);
printf("Multiplication = %d\n",multiplication);
printf("Division = %.2f\n",divide);
printf("Modulo = %.2f\n",modulo);
return 0;


}
