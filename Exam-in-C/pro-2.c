#include<stdio.h>
void main()
{
    int base,g;
    float hra,da,ta,total;
    printf("Enter Base Salary:");
    scanf("%d",&base);

    hra=(10/100.0)*base;
     printf("\nEnter HRA:%.2f",hra);

    da=(5/100.0)*base;
     printf("\nEnter DA:%.2f",da);

    ta=(8/100.0)*base;
     printf("\nEnter TA:%.2f",ta);

    total = hra + da + ta;
    printf("\nTotal is:%.2f",total);

    g = base + total ;
    printf("\nGross salary is: Rs.%d",g);
}


