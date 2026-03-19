#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n;

    // Step 1: reverse whole array
    reverse(arr, 0, n - 1);

    // Step 2: reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: reverse remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7, k = 3;

    rotateRight(arr, n, k);

    for(int i = 0; i < n; i++)  
        printf("%d ", arr[i]);

    return 0;
}