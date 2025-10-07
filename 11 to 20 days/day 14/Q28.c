//Loops without Arrays/Strings)
//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    if(product == 1 && n < 2) {
        printf("No even numbers between 1 and %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    }

    return 0;
}