#include <stdio.h>

int main()
{
  int choice;
  float num1, num2, result;

  while (1)
  {

    printf("\nSimple Calculator\n");
    printf("1. Addition\n");
    printf("2. Division\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
      printf("Exiting...\n");
      break;
    }
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice)
    {
    case 1:
      result = num1 + num2;
      printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
      break;
    case 2:
      if (num2 != 0)
      {
        result = num1 / num2;
        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
      }
      else
      {
        printf("Error: Division by zero is not allowed.\n");
      }
      break;
    default:
      printf("Invalid choice. Please select 1, 2, or 3.\n");
    }
  }

  return 0;
}
