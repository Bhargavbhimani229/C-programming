// program 1.

// #include<stdio.h>
// void main(){
//   printf("Hello World!");
//   printf("\nMy Name Is Bhargav");
// }

// program 2.
// #include<stdio.h>

// int main(){

//   printf("My Name : Bhimani  Bhargav");

//   printf("\nLocation: Navsari,Gujrat"); 

//   printf("\nContact Number: 79905 80584"); 

// }

// program 3.
// #include<stdio.h>
// #include<conio.h>
// void main(){

//   printf("*");
//   printf("\n* *");
//   printf("\n* * *");
//   printf("\n* * * *");
//   printf("\n* * * * *");
  
// }

// Lab Work #1.2

// 1.
// #include<stdio.h>
// void main(){
//  printf("My Name : Bhimani  Bhargav");
//  printf("\nAge: 21");
//  printf("\nSchool: Nilkanth vidhyalay");

// }

// 2.
// #include<stdio.h>
// void main(){
// printf("- - - - - - - -");
// printf("\n|             |");
// printf("\nR             |");
// printf("\nN             |");
// printf("\nW             |");
// printf("\n|             |");
// printf("\n- - - - - - - -");

// }

// 3.
// #include<stdint.h>
// void main(){
//   printf("*");
//   printf("\n* *");
//   printf("\n* * *");
//   printf("\n* *");
//   printf("\n*");
// }

// 4.

// #include<stdint.h>
// void main(){
//   printf(" *");
//   printf("\n *");
//   printf("\n *");
//   printf("\n *     * *       *");
//   printf("\n *    *   *     *");
//   printf("\n *   *     *   *");
//   printf("\n *  *       * *");
//   printf("\n * *");
//   printf("\n *");
// }

// 5.

// #include<stdio.h>
// void main(){
//   printf("* * * * * *");
//   printf("\n*         *");
//   printf("\n*         *");
//   printf("\n*         *");
//   printf("\n*         *");
//   printf("\n* * * * * *");
// }

// #include<stdio.h>
// void main(){
//  printf(" ******* \n");
//  printf("  ***** \n");
//  printf("   ***  \n");
//  printf("    *   \n");
  
// }


// #include<stdio.h>
// void main(){
//   printf("* * * * * * * * * \n");
//   printf("* B H A R G A V * \n");
//   printf("* * * * * * * * * \n");
// }


// #include<stdio.h>
// void main(){
//   char name[] = "Bhimani Bhargav";
//   int GR = 7590;
//   float avg = 90.10;

//   printf("\nName: %s",name);
//   printf("\nGR: %d",GR);
//   printf("\navg: %.2f",avg);

// }


// #include<stdio.h>
// void main(){
//   int a=12,b=6,c;
//   c=a+b;
//   b=a-b;
//   printf("A and B addition is :%d",c);
//   printf("\nA and B subtrction is :%d",c);
// }

// #include<stdio.h>
// void main(){
//   int a=12,b=6,c;
//   c=a-b;
//   printf("\nA and B subtrction is :%d",c);
// }

// #include<stdio.h>
// void main(){
//   int a=12,b=6,c;
//   c=a*b;
//   printf("\nA and B multiplication is :%d",c);
// }

// #include<stdio.h>
// void main(){
//   int a=12,b=6,c;
//   c=a/b;
//   printf("\nA and B Division is :%d",c);
// }

// #include<stdio.h>
// void main(){
//   int a=12,b=6,c;
//   c=a%b;
//   printf("\nA and B Modulo is :%d",c);
// }

// #include<stdio.h>
// void main(){
//   printf("- - - - - - - - -\n");
//   printf("|               |\n");
//   printf("|     5*5=25    |\n");
//   printf("|               |\n");
//   printf("- - - - - - - - -\n");
// }


// #include<stdio.h>
// void main(){
//   const int a=4;
  
//   printf("%d",a);
// }


// #include<stdio.h>
// void main(){
//   printf("Hello world!....");
// }



// #include <stdio.h>

// void main() {
//    float pie = 3.14,area;
//    int radius;
//    printf("Enter radius size:");
//    scanf("%d",&radius);
//    area = (pie * radius * radius);
//    printf("\nThe area of the given circle is %.2f",area);
// }

// #include<stdio.h>
// void main(){
//   int area ,l;
//   printf("Enter a rectangle lenght:");
//   scanf("%d",&l);
//   area = (l*l);
//   printf("rectangle area is %d",area);
// }

// #include<stdio.h>
// void main(){
//    int arry[50] = {10,20,30,40,50,60};
//    int arry2[3] = {100,200,300};

// }

// #include<stdio.h>
// void main(){
//    int number;
//    printf("Enter a number:");
//    scanf("%d",&number);
//    if(number>100){
//       number-=10;
//       printf("%d",number);
//    }

// }

// #include<stdio.h>
// void main(){
//    int a=100,b=10;
//    a>b?printf("a is grater..."):printf("b is grater..");
// }


//#include<stdio.h>
// void main()
// {
//   int b,h,s;
//   printf("Enter a base:");
//   scanf("\n%d",&b);

//   printf("Enter a hight:");
//   scanf("\n%d",&h);

//   s=(b*h)*1/2;
//   printf("area of a triangle %d",s);

// }

// #include<stdio.h>
// void main(){
//   int p,r,n,s;
//   printf("Enter a principal amount:");
//   scanf("\n%d",&p);

//    printf("Enter a rate:");
//   scanf("\n%d",&r);

//    printf("Enter a n:");
//   scanf("\n%d",&n);

//   s=(p*r*n)/100;

//   printf("simple intrest is = %d",s);
// }

// #include<stdio.h>
// void main(){
//   float r,s,pie=3.14;

//   printf("Enter a radius:");
//   scanf("%f",&r);

//     s=2*(3.14*r);
//     printf("\n %.2f",s);

// }


// #include<stdio.h>
// void main(){
//   int a=1,i;
//   for (i=1 ; i<=5 ; i++){
//     printf("\n%d",a);
//     printf(" %d\t",++a);
//     a++;
//   }
// }



// #include<stdio.h>
// void main(){
//   int i;
//   for (i=0 ; i<10 ; i++){
//       printf("\n%d\t",++i);
//       printf(" %d",++i);
//       --i;
//   }
// }

// #include<stdio.h>
// void main(){
//   int number;
//   printf("Enter a number :");
//   scanf("%d",&number);

//   printf("%d", -(number));
  
// }

