#include <stdio.h>
int main()
{
  int size = 5;
  int array[5][5];
  int i, j;
  int sum = 0;
  printf("Enter array's elements:\n");
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  printf("Boundary elements are:\n");
  for (j = 0; j < size; j++)
  {
    printf("%d ", array[0][j]);
    sum += array[0][j];
  }
  printf("\n");

  for (i = 1; i < size - 1; i++)
  {
    printf("%d ", array[i][0]);
    sum += array[i][0];
     for(j = 0; j< size-1;j++)
    {
      printf("  ");
    }
    printf("\n");
  }

  for (j = 0; j < size; j++)
  {
    printf("%d ", array[size - 1][j]);
    sum += array[size - 1][j];
   
  }
  printf("\n");
  return 0;
}
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[0][3] = 6
// a[0][4] = 3
// a[1][0] = 9
// a[1][1] = 5
// a[1][2] = 4
// a[1][3] = 6
// a[1][4] = 7
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// a[2][3] = 3
// a[2][4] = 5
// a[3][0] = 3
// a[3][1] = 4
// a[3][2] = 8
// a[3][3] = 5
// a[3][4] = 1
// a[4][0] = 2
// a[4][1] = 3
// a[4][2] = 9
// a[4][3] = 5
// a[4][4] = 7