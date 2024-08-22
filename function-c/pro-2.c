#include<stdio.h>
int division()
{
  int num;
   printf("Enter any number:");
   scanf("%d",&num);

   if((num%3==0) && (num%5==0))
   {
    printf("The given number is divisible by both 3 & 5.");
   }
   else
   {
    printf("The given number is not divisible by both 3 & 5.");

   }
   return 0;
}
int main()
{
  division();
}