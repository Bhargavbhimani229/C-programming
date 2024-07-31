#include<stdio.h>
int main()
{
  char c='a';
  do
  {
    printf("\n%c",c);
    c=c+4;
  } while (c<='z');
  
}