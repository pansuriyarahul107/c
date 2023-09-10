#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) // Row
    {
        for (int j = 1; j <= i; j++) //colam
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
    return 0;
}