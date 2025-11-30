/*Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
#include <stdlib.h>

int compareIntegers(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 1;

    int *arr = (int*)malloc(n * sizeof(int));
    
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > 0 && k <= n) {
        qsort(arr, n, sizeof(int), compareIntegers);
        printf("%d\n", arr[k - 1]);
    } else {
        printf("Invalid k\n");
    }

    free(arr);
    return 0;
}
