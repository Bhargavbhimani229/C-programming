// 5 4 3 2 1 
//   4 3 2 1 
//     3 2 1 
//       2 1 
//         1 
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
    for (int k = 6-i; k >= 1; k--)
    {
      printf("%d ",k);
    }
    printf("\n");
  }
  return 0;
}