//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int insertSorted(int arr[], int n, int key, int capacity) {
    if (n >= capacity)
        return n; // No space

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = key;
    return (n + 1);
}

int main() {
    int arr[20] = {1, 5, 8, 12, 15};
    int n = 5, capacity = 20;
    int key = 10;

    printf("Before Insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    n = insertSorted(arr, n, key, capacity);

    printf("\nAfter Insertion:  ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
