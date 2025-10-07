//Write a program to find the LCM of two numbers;

#include <stdio.h>


int gcd(int a, int b) {
    int temp;
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = gcd(num1, num2);
    lcm = (num1 / hcf) * num2;  


    if (lcm < 0) lcm = -lcm;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

