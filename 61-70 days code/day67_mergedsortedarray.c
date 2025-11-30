/*Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int* nums1, int size1, int* nums2, int size2) {
    int* result = (int*)malloc((size1 + size2) * sizeof(int));
    int i = 0; 
    int j = 0; 
    int k = 0;

    while (i < size1 && j < size2) {
        if (nums1[i] < nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }

    while (i < size1) {
        result[k++] = nums1[i++];
    }

    while (j < size2) {
        result[k++] = nums2[j++];
    }

    for (int x = 0; x < size1 + size2; x++) {
        printf("%d", result[x]);
        if (x < size1 + size2 - 1) {
            printf(" ");
        }
    }
    printf("\n");

    free(result);
}

int main() {
    int n, m;

    printf("Enter size of first array: ");
    if (scanf("%d", &n) != 1) return 1;
    int *nums1 = (int*)malloc(n * sizeof(int));
    printf("Enter elements of first array: ");
    for(int i = 0; i < n; i++) scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    if (scanf("%d", &m) != 1) return 1;
    int *nums2 = (int*)malloc(m * sizeof(int));
    printf("Enter elements of second array: ");
    for(int i = 0; i < m; i++) scanf("%d", &nums2[i]);

    mergeArrays(nums1, n, nums2, m);

    free(nums1);
    free(nums2);
    return 0;
}
