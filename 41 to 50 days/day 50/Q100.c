//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("All substrings:\n");
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

