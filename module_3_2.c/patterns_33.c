#include <stdio.h>
int main()
{
    int n;
    printf(" Enter Number Of Row :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // Row
    {
        for (int s = i; s < n; s++) // space
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) // colam
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}