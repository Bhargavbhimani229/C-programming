#include<stdio.h>
int main ()
{
  int i,sum=1,a;
  printf("Enter a number:");
  scanf("%d",&a);
  for(i=1 ; i<=a ; i++)
  {
    sum *= i;
    printf("%d ",i);

  }
  printf("\n Factroiyal is: %d",sum);
  return 0;
}