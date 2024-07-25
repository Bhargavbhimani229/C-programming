#include<stdio.h>

void main(){
  char product[30];
  int qu,price;
  float total,dis,netTotal;

  printf("Enter product name:");
  scanf("%s",&product);

  printf("Enter quntity:");
  scanf("\n%d",&qu);

  printf("Enter price:");
  scanf("%d",&price);

  total = price * qu;

  printf("\nTotal is : %.2f",total);

if(total>=1500)
{
  dis=total*0.15;
  printf("\nDiscount is %.2f",dis);
}
else if(total>=1000)
{
  dis=total*0.10;
  printf("\nDiscount is %.2f",dis);

}
else if(total>=800)
{
  dis=total*0.8;
  printf("\nDiscount is %.2f",dis);

}
else
{
  printf("\nNo discout.....");
}

netTotal = total - dis;

printf("\nNet total is: %.2f",netTotal);

}