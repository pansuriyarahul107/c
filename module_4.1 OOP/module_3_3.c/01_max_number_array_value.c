// Write a program to find out the max number from given array using function
#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("enter number %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("largenst element = %d", arr[0]);

    return 0;
}