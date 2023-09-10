#include <stdio.h>
int main()
{
    int count=0;
    int n;
    printf("Enter how many Rows you:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) // Row
    {
        for (int j = 1; j <= i; j++) //colam
        {
            count ++;
            printf("%d\t", count);
        }
        printf("\n");
    }
    return 0;
}