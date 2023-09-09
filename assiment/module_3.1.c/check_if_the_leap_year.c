// wap to check if the given year is a leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d", &year);
    
    if (year % 400 == 0)
    {
        printf("%d is a leep Year.", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d is not a leep Year", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is a leep Year", year);
    }

    else
    {

        printf("%d is a not leep year", year);
    }

    return 0;
}