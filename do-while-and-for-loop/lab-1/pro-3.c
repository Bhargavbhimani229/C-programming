#include<stdio.h>
int main()
{
  int num,mul=1,sum,i;
  printf("Enter  a number:");
  scanf("%d",&num);
  for(i=1 ; i<=10 ; i++)
  {
    sum=num*i;
    printf("\n%d * %d = %d",num,i,sum);
  }
  
  return 0;
}