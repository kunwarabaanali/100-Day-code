//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    int length = strlen(name);
    if (name[length - 1] == '\n') {
        name[length - 1] = '\0';
        length--;
    }

    int start = 0, end = 0;

    // Find and print initials of all but last word
    while (name[end] != '\0') {
        if (name[end] == ' ' || name[end + 1] == '\0') {
            int wordEnd = (name[end] == ' ') ? end - 1 : end; // last char of current word

            if (name[end + 1] == '\0') {
                // This is the last word - print full surname
                printf(" %s\n", &name[start]);
                break;
            } else {
                // Print initial of current word
                if (isalpha(name[start])) {
                    printf("%c. ", toupper(name[start]));
                }
                start = end + 1;
            }
        }
        end++;
    }

    return 0;
}
