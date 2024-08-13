// 2. Sum of Array Elements

// Question: Write a C program that calculates the sum of all elements in an integer array of 5
// elements using a for loop.

#include<stdio.h>
int main ()
{
  int a[5]={2,4,6,8,10};
  int s=0;

  for(int i =0;i<5 ;i++)
  {
    s=s+a[i];
  }
  printf("sum is : %d",s);
}
