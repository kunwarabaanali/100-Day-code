//Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n], rowSum[m];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        rowSum[i] = 0;  // Initialize sum for each row
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(int i = 0; i < m; i++)
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);

    return 0;
}

