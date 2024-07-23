#include<stdio.h>
 void main()
{
    int x,y,z;
    printf("Enter a first value: ");
    scanf("\n%d",&x);

    printf("Enter a second value: ");
    scanf("\n%d",&y);

    z = ((x * x) - (y * y)) + 2*x*y;
    printf("\nTotal is= %d",z);

}