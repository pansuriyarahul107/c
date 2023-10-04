/*WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)*/
#include <stdio.h>
int main()

{
    int a, b;
    char oprt;

    printf("Choose the an operator (+,-,*,/) for calculator: \n");
    scanf("%c", &oprt);
    printf("enter the first Value: \n");
    scanf("%d", &a);
    printf("enter the Secound Value: \n");
    scanf("%d", &b);

    switch (oprt)
    {
    case '+':

        printf("addition of %d + %d = %d\n", a, b, a + b);
        break;
    case '-':

        printf("subtraction of %d - %d = %d\n", a, b, a - b);
        break;
    case '*':

        printf("multiplication of %d * %d = %d\n", a, b, a * b);
        break;
    case '/':

        printf("division of %d / %d = %d\n", a, b, a / b);
        break;

    default:
        printf("\n you input wrong operator");
        break;
    }
}
