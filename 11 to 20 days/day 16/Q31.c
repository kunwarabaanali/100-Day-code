//Write a program to take a number as input and print its equivalent binary representation;

#include <stdio.h>

int main() {
    unsigned int num, mask;
    int bits = sizeof(num) * 8;

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");

    for (mask = 1 << (bits - 1); mask > 0; mask >>= 1) {
        if (num & mask)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}