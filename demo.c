#include <stdio.h>
void main()
{
  int a[] = {10, 20, 30, 40, 50,60};

  int *ptr = &a[0];

  // for (int i = 0; i <5; i++)
  // { 6422280
  //   printf("a[%d] = %d\n", i, *(ptr + i));
  // }
  printf("a[0]=%d",*(ptr+5));
  printf("adress : %d",ptr);
}