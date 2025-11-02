//Delete an element from an array.

#include <stdio.h>

void delete(int arr[], int *n, int pos) {
    // Shift elements to the left
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Decrease size
    (*n)--;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;      // Current number of elements
    int pos = 2;    // Position (0-based index) to delete

    delete(arr, &n, pos);

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

