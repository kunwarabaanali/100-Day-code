/*Q119: Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>

int findDuplicate(int* nums, int numsSize) {
    int maxVal = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > maxVal) {
            maxVal = nums[i];
        }
    }

    int* seen = (int*)calloc(maxVal + 1, sizeof(int));
    int duplicate = -1;

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            duplicate = nums[i];
            break;
        }
        seen[nums[i]] = 1;
    }

    free(seen);
    return duplicate;
}

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 1;

    int *nums = (int*)malloc(n * sizeof(int));
    
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findDuplicate(nums, n);
    printf("%d\n", result);

    free(nums);
    return 0;
}
