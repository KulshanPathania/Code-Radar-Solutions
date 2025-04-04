#include <stdio.h>

int kthSmallest(int arr[], int n, int k){
    int smallest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return 0;
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}