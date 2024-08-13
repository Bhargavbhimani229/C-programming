// Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>
int main()
{
  int user,re;
  printf("Enetr a eleemnt:");
  scanf("%d",&user);

  int a[user];

   for (int i=0; i < user;i++)
  {
    printf("element [%d] : ",i);
    scanf("%d",&a[i]);
  }

  for(int i=0; i<(user -1)-i ; i++)
  {
    re=a[i];
    a[i]=a[(user-1)-i];
    a[(user-1)-i]=re;
  }
  for(int i=0 ;i<user ;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}