#include <stdio.h>
int main()
{
  int a[3][3], b[3][3], sum[3][3];

  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      printf("Enter row[%d] and colum[%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n-----------------------------------------------------------\n");

  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      printf("Enter row[%d] and colum[%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n-----------------------------------------------------------\n");
  printf("\nSum of array :\n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
      printf("\t%d",sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}