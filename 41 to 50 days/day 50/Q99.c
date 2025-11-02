//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[4] = "Apr";

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Parse the input date (e.g., 25/04/2025)
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    // Check if month is "04"
    if (strcmp(month, "04") == 0) {
        printf("Date in dd-Apr-yyyy format: %s-%s-%s\n", day, monthName, year);
    } else {
        printf("Month is not 04, input date format invalid for conversion.\n");
    }

    return 0;
}
