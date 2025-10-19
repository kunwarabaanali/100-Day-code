//Reverse an array without taking extra space.

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1, temp;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
