#include<stdio.h>
void main (){
  int number;
  printf("Enter any number:");
  scanf("%d",&number);

  if(number>0)
  {
    printf("\nNumber is +ve...");
  }
  else if(number<0)
  {
    printf("\nNumber is -ve...");
  }
  else
  {
    printf("\nNumber is neutral...");
  }
}