//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int arr[100], size, i, key, found = 0;

    printf("Enter array size\n");
    scanf("%d", &size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search\n");
    scanf("%d", &key);

    for(i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element %d not found in the array\n", key);

    return 0;
}
