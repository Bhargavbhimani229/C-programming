#include <stdio.h>

int main()
{
  int rows, columns;
  int i, j;
  int sum = 0, total;
  float avg;
  printf("Enter the array's row size: ");
  scanf("%d", &rows);
  printf("Enter the array's column size: ");
  scanf("%d", &columns);

  int array[rows][columns];

  printf("Enter array's elements:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < columns; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < columns; j++)
    {
      sum += array[i][j];
    }
  }
  total = rows * columns;
  avg = sum / total;

  printf("Average of an Array: %.2f\n", avg);

  return 0;
}
