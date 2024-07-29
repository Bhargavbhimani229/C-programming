#include<stdio.h>
void main()
{
  int n,i=1;
  printf("Enter a number:");
  scanf("%d",&n);

  while (n>=1)
  {
    if(n%2!=0)
    {
      printf(" %d",n);
    }
      n--;
  }
  
  
}