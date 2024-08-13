// 1. Initialize and Print an Array

// Question: Write a C program that initializes an array of 6 floating-point numbers and uses a for
// loop to print each number in the array.

#include<stdio.h>
int main ()
{
  float a[6]={0.1,3.25,7.10,2.25,3.45,89.2};

  for(int i=0; i<6;i++)
  {
    printf("%.2f\n",a[i]);
  }
  return 0;
}