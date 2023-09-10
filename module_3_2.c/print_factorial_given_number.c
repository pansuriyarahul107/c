#include <stdio.h>
int main()
// wap to print factorial of given number.

{
    int number, i;
    long int factorial_result = 1;
    printf("enter a number:");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial_result = factorial_result * i;
    }
    printf("Factorial of %d is %ld", number, factorial_result);

    return 0;
}