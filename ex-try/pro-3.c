#include <stdio.h>
void printReverse(int arr[], int size)
{
  printf("Array elements in reverse order: ");
  for (int i = size - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int calculateSum(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int size;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d elements: \n", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printReverse(arr, size);
  int sum = calculateSum(arr, size);
  printf("The sum of the elements in the array is: %d\n", sum);

  return 0;
}
