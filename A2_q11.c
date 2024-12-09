#include <stdio.h>
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion:\n");
    printArray(arr, n);
    printf("\n where do you want to insert \n");
    printf("1. Insert at the front\n");
    printf("2. Insert at a specific position\n");
    printf("3. Insert at the end\n");
    scanf("%d", &choice);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

if (choice == 1) 
{
        for (int i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value;
        n++;
} 
else if (choice == 2) 
{
        printf("Enter the position to insert (1 to %d): ", n + 1);
        scanf("%d", &pos);
        if (pos < 1 || pos > n + 1) {
            printf("Invalid position!\n");
            return 1;
        }
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
} 
else if (choice == 3) 
{
        // Insert at the end
        arr[n] = value;
        n++;
} 
else 
{
        printf("Invalid choice!\n");
        return 1;
}
    printf("\nArray after insertion:\n");
    printArray(arr, n);
    return 0;
}
