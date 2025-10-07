//Write a program to find the 1’s complement of a binary number and print it;

#include <stdio.h>

int main() {
    long long binary, temp;
    int digit, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp > 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        temp /= 10;
    }

    temp = binary;

    while (temp > 0) {
        digit = temp % 10;

        int flipped = (digit == 0) ? 1 : 0;

        onesComplement += flipped * place;
        place *= 10;

        temp /= 10;
    }

    printf("1's complement: %d\n", onesComplement);

    return 0;
}
