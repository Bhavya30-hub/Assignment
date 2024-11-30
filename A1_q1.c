#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong or not
int isArmstrong(int num) 
{
    int org, rem, len = 0, sum = 0; 
    org = num;

    // Calculate the number of digits
    while (org != 0) 
    {
        len++;
        org /= 10;
    }
    org = num; 
    while (org != 0) 
    {
        rem = org % 10;
        sum += pow(rem, len);
        org /= 10;
    }

    return sum == num; // Return 1 if Armstrong, otherwise 0
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
