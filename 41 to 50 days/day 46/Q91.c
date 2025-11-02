//Remove all vowels from a string.

#include <stdio.h>

int isVowel(char ch) {
    char c = (ch >= 'A' && ch <= 'Z') ? ch + 'a' - 'A' : ch; // convert uppercase to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];  // Keep non-vowel characters
        }
    }
    str[j] = '\0';  // Null-terminate

    printf("String after removing vowels: %s\n", str);

    return 0;
}
