// write a c program that prompts the user to enter a 3 digit's positive integer.find the sum  of first and last digit.

#include <stdio.h>
int main()
{
  int number;
  int first, last, sum;
  printf("Enter a 3-digit positive integer: ");
  scanf("%d", &number);
  if (number < 100 || number > 999)
  {
    printf("The number is not a 3-digit positive integer.\n");
    return 1;
  }
  last = number % 10;
  first = number / 100;
  sum = first + last;

  printf("The sum of the first and last digits is: %d\n", sum);

  return 0;
}
