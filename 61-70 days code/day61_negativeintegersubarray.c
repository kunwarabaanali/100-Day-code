/*Q111: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h>

void printFirstNegativeInteger(int* arr, int n, int k) {
    int* queue = (int*)malloc(n * sizeof(int));
    int front = 0;
    int rear = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }

        if (i >= k - 1) {
            if (front < rear && queue[front] <= i - k) {
                front++;
            }

            if (front < rear) {
                printf("%d", arr[queue[front]]);
            } else {
                printf("0");
            }

            if (i < n - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");

    free(queue);
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

    printFirstNegativeInteger(arr, n, k);

    free(arr);
    return 0;
}
