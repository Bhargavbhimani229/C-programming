#include <stdio.h>
int main()
{
  int len, sum;
  printf("Enter arry size:");
  scanf("%d", &len);
  int a[len];
  int b[len];

  printf("Enter array A's elements:\n");
  for (int i = 0; i < len; i++)
  {
    printf("arry[%d]= ", i);
    scanf("%d", &a[i]);
  }
  printf("Length of an Array: %d", len);
  printf("\nEnter array B's elements:\n");
  for (int i = 0; i < len; i++)
  {
    printf("arry[%d]= ", i);
    scanf("%d", &b[i]);
  }

  for (int i = 0; i < len; i++)
  {
    printf("\nArray C is: %d,",a[i]+b[i]);
  }

  return 0;
}