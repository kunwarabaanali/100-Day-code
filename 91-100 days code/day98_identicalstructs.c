Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (s1.roll != s2.roll) return 0;
    if (s1.marks != s2.marks) return 0;
    if (strcmp(s1.name, s2.name) != 0) return 0;
    
    return 1;
}

int main() {
    struct Student s1, s2;

    printf("Enter Name, Roll, Marks for Student 1: ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    printf("Enter Name, Roll, Marks for Student 2: ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
