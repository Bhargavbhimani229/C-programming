#include <stdio.h>
int main()
{
  int len;
  float avg, sum;
  printf("Enter arry size:");
  scanf("%d", &len);
  int a[len];
  printf("Enetr arry element:\n");
  for (int i = 0; i < len; i++)
  {
    printf("arry[%d]= ", i);
    scanf("%d", &a[i]);
  }
  printf("Length of an Array: %d", len);
  for (int i = 0; i < len; i++)
  {
    sum += a[i];
  }
  printf("\nTotal is: %.1f", sum);
  avg = sum / len;

  printf("\nAverage of an Array: %.1f", avg);

  return 0;
}