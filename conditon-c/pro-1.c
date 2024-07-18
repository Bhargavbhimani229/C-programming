#include<stdio.h>
void main (){
  int first,second;

  printf("Enter a value of the first number:");
  scanf("%d",&first);

  printf("EEnter a value of the second number:");
  scanf("\n%d",&second);

  if(first<second )
  {
    printf("\nThe minimum value is:%d",first);
  }
  else
  {
    printf("\nThe minimum value is:%d",second);
  }
  
}