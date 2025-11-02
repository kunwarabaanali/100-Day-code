//Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Print first character after each space (if letter)
    for (int i = 1; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");

    return 0;
}
