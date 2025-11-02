//Insert an element in an array at a given position.



#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert new element
    arr[pos] = val;

    // Increase size of array
    (*n)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;        // Current number of elements
    int pos = 3;      // Position (0-based index) to insert at
    int val = 25;     // Value to insert

    insert(arr, &n, pos, val);

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
