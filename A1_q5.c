#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
int main() {
    int number;
    printf("Enter a number to check if it is a Perfect Number: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive number.\n");
    } else if (isPerfectNumber(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }
    return 0;
}
