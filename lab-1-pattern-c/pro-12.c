//         * 
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
#include <stdio.h>
int main() {
    int rows = 5; 
    for (int n = 1; n <= rows; n++) {

        for (int k = 1; k <= rows - n; k++) {
            printf("  ");
        }
        for (int i = 1; i <= n; i++) {
            printf("* ");
        }
        for (int i = n - 1; i >= 1; i--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}