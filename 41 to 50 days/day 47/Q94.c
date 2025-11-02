//Find the longest word in a sentence.


#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longestWord[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';  // Remove newline
    }

    char word[100];
    int index = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[index++] = sentence[i];
        } else {
            word[index] = '\0';  // Terminate current word string
            if (index > maxLength) {
                maxLength = index;
                strcpy(longestWord, word);
            }
            index = 0;
            if (sentence[i] == '\0')
                break;
        }
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}
