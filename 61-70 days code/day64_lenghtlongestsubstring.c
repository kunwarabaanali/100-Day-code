/*Q114: Write a program to take a string s as input. 
The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int maxLength = 0;
    int start = 0;
    int end = 0;

    while (s[end] != '\0') {
        unsigned char currentChar = (unsigned char)s[end];

        if (lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1;
        }

        lastSeen[currentChar] = end;

        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        end++;
    }

    return maxLength;
}

int main() {
    char s[10000]; 
    
    printf("Enter string: ");
    if (scanf("%s", s) != 1) return 1;

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}
