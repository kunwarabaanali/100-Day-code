/*Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char input[4];
    enum Month currentMonth;
    int found = 0;

    const char* monthNames[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    printf("Enter month (e.g., JAN, FEB): ");
    if (scanf("%s", input) != 1) return 1;

    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(input, monthNames[i]) == 0) {
            currentMonth = (enum Month)i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid Month\n");
        return 1;
    }

    switch (currentMonth) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}
