Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("--------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
