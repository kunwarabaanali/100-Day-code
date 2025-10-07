//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10; 
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }

    if (sum == originalNum)
        printf("%d is a STRONG NUMBER\n", originalNum);

    return 0;
}
