// * * * *
// *       *
// * * * *
// *       *
// * * * *
#include <stdio.h>
int main()
{
  int n = 4;
  for (int i = 0; i < n - 1; i++)
  {
    printf("* ");
  }
  printf("\n");
  printf("*");
  for (int k = 0; k < n - 2; k++)
  {
    printf("  ");
  }
  printf(" *\n");
  for (int i = 0; i < n - 1; i++)
  {
    printf("* ");
  }
  printf("\n");
  printf("*");
  for (int k = 0; k < n - 2; k++)
  {
    printf("  ");
  }
  printf(" *\n");
  for (int i = 0; i < n - 1; i++)
  {
    printf("* ");
  }
  printf("\n");

  return 0;
}
