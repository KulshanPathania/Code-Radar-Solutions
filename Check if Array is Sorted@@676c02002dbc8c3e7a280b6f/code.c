#include <stdio.h>

int arraysorted(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    if (arraysorted(arr, n)){
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
}