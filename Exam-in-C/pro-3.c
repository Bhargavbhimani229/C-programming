#include<stdio.h>
void main(){
  int first,second,third;
  printf("Enter a First angle:");
  scanf("%d",&first);

  printf("Enter a Second angle:");
  scanf("\n%d",&second);

  third=180-first-second;

  printf("Third angle is:%d",third);
}