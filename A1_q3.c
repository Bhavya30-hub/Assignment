
#include <stdio.h>
int subtract(int a, int b) 
{
    return a + (~b + 1);  // 2 complement of b , + a
}
int main() 
{
    int num1, num2; //A NOR B = NOT (A | B)
    printf("Enter the values");
    scanf("%d %d", &num1, &num2);
    printf("%d\n", subtract(num1, num2));
    return 0;
}