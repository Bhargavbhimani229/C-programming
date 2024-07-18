#include<stdio.h>
void main (){
  float c,f;
  printf("The temperature in Celsius:");
  scanf("%f",&c);

  f = (1.8 * c) + 32;

  printf("\nThe temperature in Fahrenheit: %.2f",f);
}