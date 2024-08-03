// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
#include<stdio.h>
int main()
{
  int a=5;
  for (int i = a; i >= 1; i--)
  {
    for (int j = i; j<=a; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }

  return 0;
}