// 5. sum of even number.

#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Enter any number:");
  scanf("%d", &n);
  for (i = 2; i <= n; i += 2)
    
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
      sum = sum + i;
    }
  }
  printf("sum of all even number 1 to %d=%d", n, sum);

  return 0;
}