#include<stdio.h>
int main ()
{
  int len,ele;
  printf("Enter arry size:");
  scanf("%d",&len);
  int a[len];

  for(int i=0 ;i < len ;i++)
  {
    printf("Enetr arry element: arry[%d]= ",i);
    scanf("%d",&a[i]);
  }
  printf("Length of an Array: %d",len);

  return 0;
}