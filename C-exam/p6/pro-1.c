// develop  ac program  that uses a structure ton represent a mobile(with attribute like compny_name,color,model,price).list N number of mobiles'
//  details using array of objects.

#include <stdio.h>
struct Mobile
{
  char company_name[50];
  char color[20];
  char model[30];
  float price;
};
void inputMobileDetails(struct Mobile mobiles[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter details for mobile %d:\n", i + 1);

    printf("Company Name: ");
    scanf("%s", mobiles[i].company_name);

    printf("Color: ");
    scanf("%s", mobiles[i].color);

    printf("Model: ");
    scanf("%s", mobiles[i].model);

    printf("Price: ");
    scanf("%f", &mobiles[i].price);

    printf("\n");
  }
}

void displayMobileDetails(struct Mobile mobiles[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Mobile %d details:\n", i + 1);
    printf("Company Name: %s\n", mobiles[i].company_name);
    printf("Color: %s\n", mobiles[i].color);
    printf("Model: %s\n", mobiles[i].model);
    printf("Price: %.2f\n", mobiles[i].price);
    printf("\n");
  }
}

int main()
{
  int n;
  printf("Enter the number of mobiles: ");
  scanf("%d", &n);

  struct Mobile mobiles[n];

  inputMobileDetails(mobiles, n);
  displayMobileDetails(mobiles, n);

  return 0;
}
