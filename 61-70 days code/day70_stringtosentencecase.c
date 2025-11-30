/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toTitleCase(char* str) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        // Check if it is the start of the string OR the character before it is a space
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    
    printf("%s\n", str);
}

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    // The space before %[^\n] consumes any leftover newline characters from previous inputs
    if (scanf(" %[^\n]", str) != 1) return 1;

    toTitleCase(str);

    return 0;
}
