// 5 4 3 2 1
// * 5 4 3 2
// * * 5 4 3
// * * * 5 4
// * * * * 5

#include <stdio.h>
int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      printf("  ");
    }
    for (int k = 5; k >= i; k--)
    {
      printf("%d ",k);
    }
    printf("\n");
  }
  return 0;
}