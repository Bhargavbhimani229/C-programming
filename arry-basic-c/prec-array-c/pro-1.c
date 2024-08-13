// Write a program in C to store elements in an array and print them.

#include<stdio.h>
int main ()
{
  int ele;
  printf("enter a element:");
  scanf("%d",&ele);
  int a[ele];

  for (int i=0;i<ele;i++)
  {
    printf("element [%d] : ",i);
    scanf("%d",&a[i]);
  }
  for(int i=0 ;i<ele ;i++)
  {
    printf("%d ",a[i]);
  }
}