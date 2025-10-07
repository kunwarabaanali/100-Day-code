//Write a program to check if a number is a perfect number

#include <stdio.h>

int main() {
    int num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num && num > 0)
        printf("%d is a PERFECT NUMBER\n", num);

    return 0;
}