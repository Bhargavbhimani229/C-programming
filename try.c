// infix

// a+b; binery oprends
// a+b*c bodmas precedance follow 

// postfix oprator opradend pachi use thay

// abc*+

// prefix oprater pela

// +a*bc

// infix this postfix ker ti vakhte plea stack ma jay pachi evalute thay
// infix this prefix ker ti vakhte plea stack ma jay pachi evalute thay


// struct abc
// {
//   int id = 10;
//   char name;
// }c1;

// int main()
// {
//   printf(" size %d",sizeof(c1));
//   printf("%d",c2.id);
//   printf("\n%s",c2.name);
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
// int *ptr;
// int a[6] = {5, 8, 3, 4, 7};
// ptr = &a[0]; 
// for (int i=0 ;i<=5 ;i++)
// {
//   printf("\n%u = %d\n", ptr+i,*(ptr+i)); // scale pointer
// }
// int a[5] = {5, 8, 4, 1, 9};
// int *ptr[5], i;
// for(i=0; i<=4; i++)
// {
//   ptr[i] = &a[i];
//   printf("%d = %d \n", ptr[i],*(ptr[i]));// pointer simple
// }
// return 0;
// }

#include<stdio.h>
int  mian()
{
  FILE *f = fopen("data.txt","r");
  char name[100000];
  if(f == NULL)
  {
    printf("\n file not open");
  }
  else
  {
    printf("\n file open ....");
    while(fgets(name,5,f) != NULL)
    {
      printf("%s",name);
    }
  }
  return 0;

}

