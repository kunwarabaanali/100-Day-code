/*Q118: Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
#include <stdlib.h>

int findMissingNumber(int* nums, int numsSize) {
    long long expectedSum = (long long)numsSize * (numsSize + 1) / 2;
    long long actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return (int)(expectedSum - actualSum);
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

    int result = findMissingNumber(nums, n);
    printf("%d\n", result);

    free(nums);
    return 0;
}
