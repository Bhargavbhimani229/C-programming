// 11
// 12 13
// 14 15 16
// 17 18 19 20

#include <stdio.h>

int main() {
    
    int rows = 4,start = 11;
    for (int i = 1; i <= rows; i++)
     {
        for (int j = 1; j <= i; j++)
         {
            printf("%d ", start);
            start++;
        }
        printf("\n");
    }

    return 0;
}