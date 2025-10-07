//Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int arr[100], size, i, even_count = 0, odd_count = 0;

    printf("Enter array size\n");
    scanf("%d", &size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Total even numbers = %d\n", even_count);
    printf("Total odd numbers = %d\n", odd_count);

    return 0;
}
