#include <stdio.h>
int main()

// wap to print fibonacci series up to given number.

{
    int n = 10;
    int a = 0, b = 1;

    printf("%d, %d", a, b);
    int nextTerm;

    for (int i = 2; i < n; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        printf("%d, ", nextTerm);
    }

    return 0;
}