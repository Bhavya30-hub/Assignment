#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of students");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of %d students :\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int count = 0;
    printf("\nStudents who scored 99:\n");
    for (int i = 0; i < n; i++) 
    {
        if (marks[i] == 99) {
            printf("Student %d\n", i + 1); 
            count++;
        }
    }
    if (count > 0) 
    {
        printf("\nTotal number of students who scored 99: %d\n", count);
    } 
    else 
    {
        printf("\nNo student scored 99\n");
    }

    return 0;
}
