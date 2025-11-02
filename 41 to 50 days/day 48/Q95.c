//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

// Function to check if s2 is substring of s1
int isSubstring(char *s1, char *s2) {
    return strstr(s1, s2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (isSubstring(temp, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not a rotation\n");
    }

    return 0;
}
