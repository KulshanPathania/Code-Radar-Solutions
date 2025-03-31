#include <stdio.h>

int peakelement(int arr[], int n){
    for (int i = 0; i < n; i++){
        if(arr[i] != arr[i + 1]){
            return -1;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]){
            return i;
        }
    }
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    if (peakelement(arr, n)){
        printf("%d", arr[n]);
    }
}