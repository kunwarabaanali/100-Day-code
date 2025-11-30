Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role currentRole;
    int isValid = 1;

    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%s", input) != 1) return 1;

    if (strcmp(input, "ADMIN") == 0) {
        currentRole = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        currentRole = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        currentRole = GUEST;
    } else {
        isValid = 0;
    }

    if (isValid) {
        switch (currentRole) {
            case ADMIN:
                printf("Welcome Admin! Full Access Granted.\n");
                break;
            case USER:
                printf("Welcome User! Standard Access Granted.\n");
                break;
            case GUEST:
                printf("Welcome Guest! Read-Only Access.\n");
                break;
        }
    } else {
        printf("Access Denied: Invalid Role\n");
    }

    return 0;
}
