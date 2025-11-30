/*Q108: Write a Program to take an integer array nums. 
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }
    
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", answer[i]);
        if (i < numsSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    free(answer);
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

    productExceptSelf(nums, n);

    free(nums);
    return 0;
}
