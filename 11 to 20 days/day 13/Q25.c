//Write a program to implement a basic calculator using switch-case for +, -, *, /, %;

#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if(num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}