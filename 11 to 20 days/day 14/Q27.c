//(Loops without Arrays/Strings)
//Write a program to print the sum of the first n odd numbers;

#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, num = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(count < n) {
        sum += num;
        num += 2; // Next odd number
        count++;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}