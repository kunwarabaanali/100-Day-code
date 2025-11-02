//Multiply Two Matrices

#include <stdio.h>
int main() {
    int m1, n1, m2, n2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &m2, &n2);

    if(n1 != m2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int a[m1][n1], b[m2][n2], result[m1][n2];

    printf("Enter first matrix elements:\n");
    for(int i=0;i<m1;i++)
        for(int j=0;j<n1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix elements:\n");
    for(int i=0;i<m2;i++)
        for(int j=0;j<n2;j++)
            scanf("%d",&b[i][j]);

    // Initialize result matrix with zeros
    for(int i=0;i<m1;i++)
        for(int j=0;j<n2;j++)
            result[i][j] = 0;

    for(int i=0; i<m1; i++)
        for(int j=0; j<n2; j++)
            for(int k=0; k<n1; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Resultant matrix:\n");
    for(int i=0;i<m1;i++) {
        for(int j=0;j<n2;j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
