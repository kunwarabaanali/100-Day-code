//Write a program to check if a number is an Armstrong number;

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}