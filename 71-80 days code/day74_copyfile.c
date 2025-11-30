/*Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourcePath[100], destPath[100];
    FILE *sourcePtr, *destPtr;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourcePath);

    printf("Enter destination file name: ");
    scanf("%s", destPath);

    sourcePtr = fopen(sourcePath, "r");
    if (sourcePtr == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    destPtr = fopen(destPath, "w");
    if (destPtr == NULL) {
        fclose(sourcePtr);
        printf("Error: Cannot create destination file.\n");
        return 1;
    }

    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    printf("File copied successfully to %s\n", destPath);

    fclose(sourcePtr);
    fclose(destPtr);

    return 0;
}
