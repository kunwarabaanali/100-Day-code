//Find the Transpose of a Matrix

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n], transpose[n][m];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose of the matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
