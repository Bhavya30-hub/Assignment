#include <stdio.h>
int hcf(int a, int b) 
{
    if (b == 0) // agar b is 0 , HCF will be a
        return a;
    return hcf(b, a % b);
}
int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));
    return 0;
}
