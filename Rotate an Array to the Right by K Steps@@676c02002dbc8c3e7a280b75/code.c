#include <stdio.h>

int rotatearray(int arr[], int n, int d){
    for (int i = 0; i < d; i++){
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--){
            arr[j] = arr[j - 1];
        }
        last = arr[0];
    }
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", rotatearray(arr, n, d));
    printarray(arr, n);
}