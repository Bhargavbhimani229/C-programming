// 10 9 8 7 6
// *  9 8 7 6
// *  * 8 7 6
// *  * * 7 6
// *  * * * 6
#include <stdio.h>
int main()
{
  int i, j;
  int rows = 10,end=6;
  for (i = 0; i <= rows; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("  ");
    }
    for (j = rows - i; j >= end; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
