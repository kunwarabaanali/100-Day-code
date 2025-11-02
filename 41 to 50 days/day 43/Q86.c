//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Compute length excluding newline
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome by comparing characters from start and end
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
