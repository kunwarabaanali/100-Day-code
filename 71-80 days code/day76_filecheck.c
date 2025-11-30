/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fptr;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");
        while ((ch = fgetc(fptr)) != EOF) {
            printf("%c", ch);
        }
        fclose(fptr);
    }

    return 0;
}
