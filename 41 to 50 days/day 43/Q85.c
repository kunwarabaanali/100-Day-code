//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length excluding newline character if present
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print characters in reverse order
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
