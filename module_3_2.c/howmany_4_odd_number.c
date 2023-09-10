/*how many Odd number are there.

there are 50 Odd numbers under 100.
the Odd number from 1 to 100*/

#include <stdio.h>
int main()
{
  int i;
  printf("Even number between 1 to 100(inclusive):\n");
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 1)
    {

      printf("%d \n", i);
    }
  }
  return 0;
}
