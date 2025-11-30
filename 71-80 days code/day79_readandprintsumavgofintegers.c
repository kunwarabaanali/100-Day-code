/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;
    long long sum = 0;
    int count = 0;
    float average;

    fptr = fopen("numbers.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("File is empty or contains no valid integers.\n");
    }

    fclose(fptr);
    return 0;
}
