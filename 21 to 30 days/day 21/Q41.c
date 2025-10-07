//Write a program to swap the first and last digit of a number;

#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits = 0, divisor, middlePart, swappedNum;
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = num % 10;
  
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

  
    divisor = 1;
    for (int i = 1; i < digits; i++)
        divisor *= 10;

    firstDigit = num / divisor;
    middlePart = (num % divisor) / 10; 
    
    swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
