#include <stdio.h>
int main()
{
  int row, col;
  printf("Enter the array's row size: ");
  scanf("%d", &row);
  printf("Enter the array's column size: ");
  scanf("%d", &col);

  int array[row][col];

  printf("Enter array's elements:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
  int rownum;
  printf("Enter row number: ");
  scanf("%d", &rownum);

  if (rownum >= 0 && rownum < row)
  {
    int rowsum = 0;
    printf("Elements of row %d: ", rownum);
    for (int j = 0; j < col; j++)
    {
      printf("%d ", array[rownum][j]);
      rowsum += array[rownum][j];
    }
    printf("\nThe sum of row %d: %d\n", rownum, rowsum);
  }
  else
  {
    printf("Invalid row number.\n");
  }
  int colnum;
  printf("Enter column number: ");
  scanf("%d", &colnum);

  if (colnum >= 0 && colnum < col)
  {
    int colsum = 0;
    printf("Elements of column %d: ", colnum);
    for (int i = 0; i < row; i++)
    {
      printf("%d ", array[i][colnum]);
      colsum += array[i][colnum];
    }
    printf("\nThe sum of column %d: %d\n", colnum, colsum);
  }
  else
  {
    printf("Invalid column number.\n");
  }

  return 0;
}
