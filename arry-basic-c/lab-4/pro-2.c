#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  char upr;

  printf("Enter a string:");
  gets(str);
  
  printf("Uppercase string: %s",strlwr(str));

  return 0;
}