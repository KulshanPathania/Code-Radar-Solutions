#include <stdio.h>

void sortarray(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int target){
    sortarray(arr, n);
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            return i;
        }
        else if (arr[i] == arr[0]){
            return 3;
        }
    }
    return -1;
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}