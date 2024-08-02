// 1 0 1 0 1
// * 1 0 1 0
// * * 1 0 1
// * * * 1 0
// * * * * 1
#include <stdio.h>

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++)
     {
        for (int k = 0; k < i; k++)
         {
            printf("  ");
        }
        for (int j = 0; j < n-i; j++) 
        {
            if (j % 2 == 0)
             {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
