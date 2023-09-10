#include <stdio.h>
void main()
{

    int n;
    printf("Enter the number of line:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // Row
    {
        for (int j = 1; j <= i; j++) // colam
        {

            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }
    return 0;
}