#include <stdio.h>
#include <math.h>

// to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, rem;

    while (binary > 0) {
        rem = binary % 10;       // Extract the last digit
        decimal += rem * base;   // Add to the decimal value
        base *= 2;               // Update the base (powers of 2)
        binary /= 10;            // Remove the last digit
    }

    return decimal;
}

// to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, place = 1;

    while (decimal > 0) {
        remainder = decimal % 2;        // Get the binary digit
        binary += remainder * place;   // Add it to the binary number
        place *= 10;                   // Update the place value (powers of 10)
        decimal /= 2;                  // Update the decimal number
    }

    return binary;
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        int decimal = binaryToDecimal(binary);
        printf("Decimal equivalent: %d\n", decimal);
    } 
    else if (choice == 2) 
    {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        long long binary = decimalToBinary(decimal);
        printf("Binary equivalent: %lld\n", binary);
    } 
    else 
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
