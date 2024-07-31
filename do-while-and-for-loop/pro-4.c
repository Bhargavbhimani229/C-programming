#include<stdio.h>
int main()
{
  int n1=0,n2=1,i,number;
  printf("Enter  a numbr:");
  scanf("%d",&number);
  printf("%d %d",n1,n2);

  for(i=2 ; i<number ; i++)
  {
    int n3=n1+n2;
    printf(" %d",n3);
    n1=n2;
    n2=n3;
  }
  return 0;
}
// 1
// 1 2
// 1 3 5
// 1 6 11 16
// 1 17 33 49 65