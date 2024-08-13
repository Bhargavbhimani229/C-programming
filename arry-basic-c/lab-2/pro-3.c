// 3. Reverse an Array

// Question: Write a C program that reverses the elements of an integer array of size 4 using a for
// loop and prints the reversed array.
#include<stdio.h>
int main()
{
  int a[4]={1,2,3,4};
  int re;
  for (int i=0 ;i<2 ;i++)
  {
    re=a[i];
    a[i]=a[3-i];
    a[3-i]=re;
  }

  for (int i=0 ;i<4 ;i++)
  {
    printf("%d, ",a[i]);
  }
  printf("\n");

  return 0;
}