#include<stdio.h>

int cube()
{
  int num,total;
    printf("Enter a number: ");
    scanf("%d",&num);
    total=num*num*num;
    printf("Cube is: %d",total);
    return 0;
}
 int main()
 {
      cube();
 }

