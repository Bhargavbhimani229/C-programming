#include <stdio.h>
int main()
{
  int size;
  printf("Enter the array's size: ");
  scanf("%d", &size);

  int user[size];

  printf("Enter array's elements:\n");

  for (int i = 0; i < size; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &user[i]);
  }
  for (int i = 0; i < size; i++)
  {
    if (user[i] < 0)
    {
      printf("Negative elements from an Array: %d\n", user[i]);
    }
  }

  return 0;
}