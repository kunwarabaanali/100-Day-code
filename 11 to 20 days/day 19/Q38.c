//Write a program to find the sum of digits of a number;

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
