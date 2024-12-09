#include <stdio.h>
char getGrade(int marks) {
    if (marks >= 75)
        return 'A';
    else if (marks >= 60)
        return 'B';
    else if (marks >= 40)
        return 'C';
    else
        return 'D';
}
void displayGrades(int marks[], int size) {
    printf("\n Student Grades : \n");
    printf("---------------\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: Marks = %d, Grade = %c\n", i + 1, marks[i], getGrade(marks[i]));
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    displayGrades(marks, n);
    return 0;
}
