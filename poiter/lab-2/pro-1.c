#include<stdio.h>
#include<string.h>
  struct stud
  {
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int std;
    char school[50];
  };

  struct stud c1,c2,c3;
  void main()
  {
    printf("\n 1 \n");

    printf("Enter your id :");
    scanf("%d",&c1.id);
    printf("Enter your name:");
    scanf("%s",&c1.name);
    printf("Enter your age:");
    scanf("%d",&c1.age);
    printf("Enter your course:");
    scanf("%s",&c1.course);
    printf("Enter your city:");
    scanf("%s",&c1.city);
    printf("Enter your standerd:");
    scanf("%d",&c1.std);
    printf("Enter your school:");
    scanf("%s",&c1.school);

    printf("\n 2 \n");

    printf("Enter your id :");
    scanf("%d",&c2.id);
    printf("Enter your name:");
    scanf("%s",&c2.name);
    printf("Enter your age:");
    scanf("%d",&c2.age);
    printf("Enter your course:");
    scanf("%s",&c2.course);
    printf("Enter your city:");
    scanf("%s",&c2.city);
    printf("Enter your standerd:");
    scanf("%d",&c2.std);
    printf("Enter your school:");
    scanf("%s",&c2.school);

    printf("\n 3 \n");

    printf("Enter your id :");
    scanf("%d",&c3.id);
    printf("Enter your name:");
    scanf("%s",&c3.name);
    printf("Enter your age:");
    scanf("%d",&c3.age);
    printf("Enter your course:");
    scanf("%s",&c3.course);
    printf("Enter your city:");
    scanf("%s",&c3.city);
    printf("Enter your standerd:");
    scanf("%d",&c3.std);
    printf("Enter your school:");
    scanf("%s",&c3.school);

    printf("\nid = %d",c1.id);
    printf("\nname = %s",c1.name);
    printf("\nage = %d",c1.age);
    printf("\ncourse = %s",c1.course);
    printf("\ncity = %s",c1.city);
    printf("\nstanderd = %d",c1.std);
    printf("\nschool = %s",c1.school);

    printf("\nid = %d",c2.id);
    printf("\nname = %s",c2.name);
    printf("\nage = %d",c2.age);
    printf("\ncourse = %s",c2.course);
    printf("\ncity = %s",c2.city);
    printf("\nstanderd = %d",c2.std);
    printf("\nschool = %s",c2.school);

    printf("\nid = %d",c3.id);
    printf("\nname = %s",c3.name);
    printf("\nage = %d",c3.age);
    printf("\ncourse = %s",c3.course);
    printf("\ncity = %s",c3.city);
    printf("\nstanderd = %d",c3.std);
    printf("\nschool = %s",c3.school);

  }
  