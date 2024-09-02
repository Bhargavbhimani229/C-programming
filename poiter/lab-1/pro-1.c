#include<stdio.h>
int main()
{
  int num;
  printf("Enter the array's size:");
  scanf("%d",&num);
  int arry[num];
  for(int i=0 ;i<num;i++)
  {
    printf("a[%d]:",i);
    scanf("%d",&arry[i]);  
  }
  int *ptr=&arry[num-1];

   printf("Reversed array elements:\n");

   for (int i=0; i<num;i++) {
        printf("%d ",(*ptr) * (*ptr));
        ptr--;  
    }

  return 0;
}