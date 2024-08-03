// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
#include<stdio.h>
int main()
{
  int i ,j ,k;
  for(i=1 ; i<=5 ; i++)
  {
   
    for(j=1; j<=6-i; j++)
    {
        printf("%d ",j);
    }
     for(k=1 ;k<i;k++)
    {
      printf("  ");
    }
     for(k=1 ;k<i;k++)
    {
      printf("  ");
    }
    for(j=6-i ;j >= 1 ;j--)
    {
      printf("%d ",j);
    }
    printf("\n");

  }
  return 0;

}