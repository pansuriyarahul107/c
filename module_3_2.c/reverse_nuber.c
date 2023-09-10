#include <stdio.h>
int main() 
// write to print  number in reverse  oder.


{
    int n, reverse = 0, reminder;
    printf("enter an value : ");
    scanf("%d",&n);

    while (n != 0)
    {
        reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n/=10;
    }
    
       printf("Reversed number = %d",reverse);

       return 0;



}