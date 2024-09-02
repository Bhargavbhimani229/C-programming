#include <stdio.h>
void findCubes(int *arr, int size)
{
  printf("Cubes of the array elements:\n");
  for (int i = 0; i < size; i++)
  {
    int cube = (*arr) * (*arr) * (*arr);
    printf("%d ", cube);
    arr++;
  }
  printf("\n");
}

int main()
{
  int size;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d elements:\n", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  findCubes(arr, size);

  return 0;
}
