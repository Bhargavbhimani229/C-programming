#include <stdio.h>
int reverseDigits(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
void display(int num) {
    int reversed = reverseDigits(num);
    printf("The reversed number is: %d\n", reversed);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    display(num);
    return 0;
}
