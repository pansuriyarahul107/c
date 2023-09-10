#include <stdio.h>
int main()
{
    char a='A';
    for (int i = 0; i <= 5; i++) // Row
    {
        for (int j = 1; j <= i; j++) //colam
        {
            printf("%c",a++);
        }
        printf("\n");
    }
    return 0;
}