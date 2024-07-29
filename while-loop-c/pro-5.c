#include<stdio.h>
void main()
{
  int num1,num2;
  printf("Enter first number:");
  scanf("%d",&num1);

  printf("Enter second number:");
  scanf("%d",&num2);

  while (num1<num2)
  {
    if (num1%4==0)
    {
      printf(" %d",num1);
    }
    num1++;
  }
    
}