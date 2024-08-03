// 1 0 1 0 1 
// 1 0 1 0
// 1 0 1
// 1 0
// 1
#include <stdio.h>
int main()
{
  int n = 5 ;
  for (int i = n; i > 0; i--)
  {
    for (int k = 0; k < i ; k++)
    {
      printf("%d ",(k % 2 == 0));
    }
    printf("\n");
  }
  return 0;
}

