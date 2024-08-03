// * * * *1
// * * *1 2 1
// * * 1 2 3 2 1
// * 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include <stdio.h>
int main() {
    int rows = 5; 
    for (int n = 1; n <= rows; n++) {

        for (int k = 1; k <= rows - n; k++) {
            printf("  ");
        }
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        for (int i = n - 1; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}



