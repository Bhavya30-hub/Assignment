#include <stdio.h>

void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingAddition(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swapUsingMultiplication(int *a, int *b) {
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

int main() {
    int num1, num2, choice;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Choose a swapping method:\n");
    printf("1. Using a temporary variable\n");
    printf("2. Using addition and subtraction\n");
    printf("3. Using XOR\n");
    printf("4. Using multiplication and division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            swapUsingTemp(&num1, &num2);
            break;
        case 2:
            swapUsingAddition(&num1, &num2);
            break;
        case 3:
            swapUsingXOR(&num1, &num2);
            break;
        case 4:
            if (num1 == 0 || num2 == 0) {
                printf("Cannot use multiplication/division method with zero.\n");
                return 1;
            }
            swapUsingMultiplication(&num1, &num2);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
