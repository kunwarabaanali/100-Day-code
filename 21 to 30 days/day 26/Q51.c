//Write a program to print the following pattern:
//5
// 45
//345
// 2345
//12345

#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
      
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        for (int num = rows - i + 1; num <= rows; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
