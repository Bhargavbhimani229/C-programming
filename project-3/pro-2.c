#include<stdio.h>
int main()
{
  int digit,count=0 ,number,i;
  printf("Enter a number:");
  scanf("%d",&number);
  while (number>0)
  {
    number = number / 10;
    count++;
  }
    printf("%d",count);
  
  return 0;
}