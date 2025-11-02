//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    int length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--;
    }

    char *wordStart = sentence;
    char *ptr = sentence;

    while (*ptr) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
        ptr++;
    }
    // Reverse the last word
    reverseWord(wordStart, ptr - 1);

    printf("Sentence with each word reversed: %s\n", sentence);

    return 0;
}
