// how many even number are there.

// there are 50 even numbers under 100.
// the even number from 1 to 50
#include <stdio.h>
int main()
{
  int i;
  printf("Even number between 1 to 50(inclusive):\n");
  for (int i = 1; i <= 50; i++)
  {
    if (i % 2 == 0)
    {

      printf("%d \n", i);
    }
  }
  return 0;
}
