// 5 
// 4 5 
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5
#include <stdio.h>
int main()
{
  int a=5;
  for (int i = a; i >= 1; i--)
  {
    for (int j = i; j<=a; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
