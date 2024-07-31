#include <stdio.h>

int main()
{
    int num, sum=0, first, last;
    printf("Enter any number : ");
    scanf("%d", &num);
  
    last = num % 10;
    printf("\nLast number is :%d",last);
    first = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    first = num;
    printf("\nFirst number is :%d",first);
    sum = first + last; 
    printf("\nSum of first and last digit = %d", sum);

    return 0;
}