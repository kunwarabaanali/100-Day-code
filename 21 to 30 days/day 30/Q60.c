//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[100], size, i;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter array size\n");
    scanf("%d", &size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < size; i++) {
        if(arr[i] > 0)
            positive_count++;
        else if(arr[i] < 0)
            negative_count++;
        else
            zero_count++;
    }

    printf("Total positive numbers = %d\n", positive_count);
    printf("Total negative numbers = %d\n", negative_count);
    printf("Total zeros = %d\n", zero_count);

    return 0;
}