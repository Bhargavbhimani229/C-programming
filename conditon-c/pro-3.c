#include<stdio.h>
void main (){
  int sub1,sub2,sub3,rollnumber,total;
  char name[20];
  float avr;
  printf("Enter your name:");
  scanf("\n%s",&name);

  printf("Enter your rollnumber:");
  scanf("\n%d",&rollnumber);

  printf("Enter your sub-1 marks:");
  scanf("\n%d",&sub1);

  printf("Enter your sub-2 marks:");
  scanf("\n%d",&sub2);

  printf("Enter your sub-3 marks:");
  scanf("\n%d",&sub3);

  total = sub1 + sub2 + sub3;

  printf("\nyour total marks is:%d",total);

  avr = total/3;
  printf("\n avrage is :%.2f",avr);
  if(avr>=35 && avr>=35 && avr>=35)
  {
    printf("\n Pass.....");
      if(avr>90)
  {
    printf("\nYour grade is A...");
  }
  else if (avr>80)
  {
    printf("\nYour grade is B...");
  }
  else if (avr>70)
  {
     printf("\nYour grade is C...");
  }
   else if (avr>60)
  {
     printf("\nYour grade is D...");
  }
  else 
  {
    printf("\nYou are Fail....");
  }
  }
  else
  {
    printf("\n Fail.....");
  }


}