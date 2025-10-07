//Write a program to find the roots of a quadratic equation and categorize them;

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (a == 0) {
        printf("Not a quadratic equation.\n");
    } else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root1);
    } else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}