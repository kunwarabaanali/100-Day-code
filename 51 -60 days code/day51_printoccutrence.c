/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include<stdio.h>
int findFirst(int num[], int n, int target){
    int low=0;
    int high = n-1;
    int first_occurence= -1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(num[mid] == target){
            first_occurence = mid;
            high = mid -1;
        }
        else if(num[mid] < target){
            low = mid + 1;
        }
        else if(num[mid] > target){
            high = mid - 1;
        }
    }
    return first_occurence ;
}

int findLast(int num[],int n, int target){
    int low = 0;
    int high = n -1;
    int last_occurence = -1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if (num[mid] == target){
            last_occurence = mid;
            low = mid + 1;
        }
         else if(num[mid] < target){
            low = mid + 1;
        }
        else if(num[mid] > target){
            high = mid - 1;
        }
    }
    return last_occurence ;
}
int main(){
    int n, target, i;

    printf("Enter number of elements of the array : \n");
    scanf("%d",&n);

    int nums[n];

    printf("Enter elements of the array : \n");
    for(i=0; i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the number you want to search for :\n");
    scanf("%d",&target);

    int first = findFirst(nums,n,target);
    int last = findLast(nums,n,target);

    printf("First occurence : %d\n",first);
    printf("Last occurence : %d\n",last);

    return 0;
}
