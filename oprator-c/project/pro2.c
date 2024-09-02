#include <stdio.h>
void calculateCubes(int *arr, int rows, int cols)
{
  for (int i = 0; i < rows * cols; i++)
  {
    *(arr + i) = *(arr + i) ** (arr + i) ** (arr + i);
  }
}

int main()
{
  int size;
  printf("Enter array's size: ");
  scanf("%d", &size);

  int arr[size][size];

  printf("Enter array elements:\n");
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  calculateCubes(&arr[0][0], size, size);
  printf("Cubes of all elements:\n");
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
