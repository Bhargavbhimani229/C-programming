#include <stdio.h>
int main()
{
  int row, col;
  printf("Enter the array's row size: ");
  scanf("%d", &row);
  printf("Enter the array's column size: ");
  scanf("%d", &col);

  int array[row][col];
  int tr[col][row];
  printf("Enter array's elements:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      tr[j][i] = array[i][j];
    }
  }
  printf("The transpose matrix of the array:\n");
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      printf("%d ", tr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
