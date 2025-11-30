Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char command[20];
    int n1, n2;
    enum Operation op;
    int valid = 1;

    printf("Enter operation and two numbers (e.g., ADD 10 20): ");
    if (scanf("%s %d %d", command, &n1, &n2) != 3) return 1;

    if (strcmp(command, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(command, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(command, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        valid = 0;
    }

    if (valid) {
        switch (op) {
            case ADD:
                printf("%d\n", n1 + n2);
                break;
            case SUBTRACT:
                printf("%d\n", n1 - n2);
                break;
            case MULTIPLY:
                printf("%d\n", n1 * n2);
                break;
        }
    } else {
        printf("Invalid Operation\n");
    }

    return 0;
}
