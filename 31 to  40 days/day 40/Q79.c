//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];

    printf("Enter matrix elements:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    // Diagonal traversal starting from first column
    for(int row=0; row<m; row++) {
        int i = row, j = 0;
        while(i >= 0 && j < n) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }
    // Diagonal traversal starting from bottom row (excluding first column)
    for(int col=1; col<n; col++) {
        int i = m - 1, j = col;
        while(i >= 0 && j < n) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }
    return 0;
}
