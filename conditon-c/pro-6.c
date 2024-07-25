#include <stdio.h>
void main()
{
  int ch, ch1, ch2, ch3;

  printf("\nPress 1 for English");
  printf("\nPress 2 for Hindi");
  printf("\nPress 3 for Gujarati");

  printf("\nEnter Your Choice:");
  scanf("%d", &ch);

  printf("\n------------------------------");

  switch (ch)
  {
  case 1:
    printf("\nPress 1 for Internet Recharge");
    printf("\nPress 2 for Top-up Recharge");
    printf("\nPress 3 for Special Recharge");

    printf("\nEnter your choice:");
    scanf("%d", &ch1);
    switch (ch1)
    {
    case 1:
      printf("\nYou have successfully done a Internet Recharge.");
      break;
    case 2:
      printf("\nYou have successfully done a Top-up Recharge.");
      break;
    case 3:
      printf("\nYou have successfully done a Special Recharge.");
      break;

    default:
      printf("\n Your choise is wrong....");
      break;
    }

    break;

  case 2:
    printf("\nInternet Recharge ke liye 1 dabaiye");
    printf("\nTop-up Recharge ke liye 2 dabaiye");
    printf("\nSpecial Recharge ke liye 3 dabaiye");

    printf("\nEnter your choice:");
    scanf("%d", &ch2);
    switch (ch2)
    {
    case 1:
      printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
      break;
    case 2:
      printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
      break;
    case 3:
      printf("\nAapne safaltapurvak Special Recharge kar liya he.");
      break;

    default:
      printf("\n Your choise is wrong....");
      break;
    }
    break;

  case 3:
    printf("\nInternet Recharge mate 1 dabavo");
    printf("\nTop-up Recharge mate 2 dabavo");
    printf("\nSpecial Recharge mate 3 dabavo");

    printf("\nEnter your choice:");
    scanf("%d", &ch3);

    switch (ch3)
    {
    case 1:
      printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
      break;
    case 2:
      printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
      break;
    case 3:
      printf("\nTame safaltapurvak Special Recharge karyu chhe.");
      break;

    default:
      printf("\n Your choise is wrong....");
      break;
    }
    break;
  default:
    printf("\n Your choise is wrong....");
    break;
  }
}