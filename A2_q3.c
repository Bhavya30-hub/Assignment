#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int position = -1;
    for (int i = 0; i < n; i++) 
    {
        if (marks[i] == 99) 
        {
            position = i + 1; // Stores the 1-based position
            break;
        }
    }
    if (position != -1) 
    {
        printf("The first student to score 99 is at position %d.\n", position);
    } 
    else
    {
        printf("No student scored 99.\n");
    }
    return 0;
}
