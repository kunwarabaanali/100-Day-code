//Find the sum of all elements in a matrix

#include <stdio.h>
int main() {
    int m, n, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
