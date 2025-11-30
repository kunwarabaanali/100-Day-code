/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char buffer[255];

    fptr = fopen("info.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
