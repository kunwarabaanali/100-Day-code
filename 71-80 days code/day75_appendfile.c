/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char text[1000];

    fptr = fopen("data.txt", "a");

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        fprintf(fptr, "%s", text);
    }

    fclose(fptr);

    printf("File updated successfully with appended text.\n");

    return 0;
}
