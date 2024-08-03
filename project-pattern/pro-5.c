// * * * * 5
// * * * 4 5 4
// * * 3 4 5 4 3
// * 3 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1
#include <stdio.h>
int main()
{
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - i ; k++)
    {
      printf("  ");
    }
    for (int j = n - i; j <= 5; j++)
    {
      printf("%d ", j);
    }
    for (int j = 4; j >= n - i; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
