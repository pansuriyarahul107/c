#include <stdio.h>
int main()
{
   // wap find number is even or odd using ternary operator

    int a;
    printf("Enter a:");
    scanf("%d", &a);

    if (a % 2 == 0)
    {

        printf("This number is Even");
    }
    else
    {

        printf("This numer is ODD");
    }

    return 0;
}