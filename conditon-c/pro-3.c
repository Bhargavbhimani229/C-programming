#include<stdio.h>
void main (){
  int sub1,sub2,sub3,rollnumber,total;
  char name[20];
  float avr;
  printf("Enter youre name:");
  scanf("\n%s",&name);

  printf("Enter youre rollnumber:");
  scanf("\n%d",&rollnumber);

  printf("Enter youre sub-1 marks:");
  scanf("\n%d",&sub1);

  printf("Enter youre sub-2 marks:");
  scanf("\n%d",&sub2);

  printf("Enter youre sub-3 marks:");
  scanf("\n%d",&sub3);

  total = sub1 + sub2 + sub3;

  printf("\nyoure total marks is:%d",total);

  avr = total/3;
  printf("\n avrage is :%.2f",avr);
  if(avr>90)
  {
    printf("\nYoure grade is A...");
  }
  else if (avr>80)
  {
    printf("\nYoure grade is B...");
  }
  else if (avr>70)
  {
     printf("\nYoure grade is C...");
  }
   else if (avr>60)
  {
     printf("\nYoure grade is D...");
  }
  else 
  {
    printf("\nYou are Fail....");
  }
}