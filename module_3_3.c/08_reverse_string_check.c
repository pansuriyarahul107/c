// 08. wap to reverse a string and check that the sting is palindrome or not.

#include <stdio.h>
int main()
{
    char str[] = {"rahr"};

    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);

    return 0;
}
