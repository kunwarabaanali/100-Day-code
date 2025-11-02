//Find the second largest element in an array.



#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("Second largest element = %d", max2);
    return 0;
}
