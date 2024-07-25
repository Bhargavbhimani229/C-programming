// #include<stdio.h>
// void main(){
//   int a,b,c;
//   printf("Enter three number:");
//   scanf("%d %d %d",&a,&b,&c);

//   if(a<b)
//   {
//     if(a<c)
//     {
//       printf("A is mini..");
//     }
//     else
//     {
//       printf("C is mini..");
//     }
//   }
//   else
//   {
//     if(b<c)
//     {
//       printf("B is mini..");
//     }
//     else
//     {
//       printf("C is mini..");
//     }
//   }
// }

#include<stdio.h>
void main ()
{
  int a,b,c;
  printf("Enter a three numbre:");
  scanf("%d %d %d",&a,&b,&c);

  a <= b ? a <= c ? printf("A is min..") : printf("C is min..") :b <= c ? printf("B is min..") : printf("C is min..");
} 