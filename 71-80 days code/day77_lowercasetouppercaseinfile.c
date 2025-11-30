/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inPtr, *outPtr;
    char ch;

    inPtr = fopen("input.txt", "r");
    if (inPtr == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    outPtr = fopen("output.txt", "w");
    if (outPtr == NULL) {
        fclose(inPtr);
        printf("Error: Could not create output.txt\n");
        return 1;
    }

    while ((ch = fgetc(inPtr)) != EOF) {
        fputc(toupper(ch), outPtr);
    }

    printf("File processed. Check output.txt\n");

    fclose(inPtr);
    fclose(outPtr);

    return 0;
}
