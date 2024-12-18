#include <stdio.h>

int bSearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while(left <= right) {
    int mid = left + (right - left) / 2; //calculate mid point

    if(arr[mid] == target) {
        return mid;
    }else if(arr[mid] < target){
        left = mid + 1;
    }else{
        right = mid - 1;
    }
    } 
    return -1;
}
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int result = bSearch(arr, n, target);

    if(result != -1){
        printf("Target found at index %d\n", result);
    }else {
        printf("Not found");
    }
    return 0;
}