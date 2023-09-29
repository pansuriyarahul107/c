// WAP to find factorial using recursion
//  ans formet = 1*2*3*4*5*6 =720
#include <stdio.h>

int main()
{
    int multiNo(int n);
    int n;

    printf(" enter a positive integer:  ");
    scanf("%d", &n);
    printf("factorial of %d = %d", n, multiNo(n));

    return 0;
}
int multiNo(int n)
{
    if (n >= 1)
        return n * multiNo(n - 1);
    else
        return 1;
}