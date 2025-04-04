#include <stdio.h>

void sortarray(int arr[], int n){
    int smallest = arr[0];
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int kthSmallest(int arr[], int n, int k){
    sortarray(arr, n);
    if (k > n){
        return -1;
    }
    return arr[k - 1];
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}