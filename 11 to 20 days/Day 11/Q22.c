//Write a program to find profit or loss percentage given cost price and selling price;

#include <stdio.h>

int main() {
    float cp, sp, amount, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if(sp > cp) {
        amount = sp - cp;
        percent = (amount / cp) * 100;
        printf("Profit: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percent);
    } else if(cp > sp) {
        amount = cp - sp;
        percent = (amount / cp) * 100;
        printf("Loss: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percent);
    } else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}