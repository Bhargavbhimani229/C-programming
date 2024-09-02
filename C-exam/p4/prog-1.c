// create a c program that defines a function to check if given number is divisible bye 3 and 5 both or not
#include<stdio.h>
void divide()
{
  int num;
  printf("Enter any Number:");
  scanf("%d",&num);
  if(num%3==0 && num%5==0)
  {
    printf("Number is divisible by 3 and 5");
  }
  else
  {
    printf("Number is not divisible by 3 and 5");
  }
}
void main()
{
   divide();
}

