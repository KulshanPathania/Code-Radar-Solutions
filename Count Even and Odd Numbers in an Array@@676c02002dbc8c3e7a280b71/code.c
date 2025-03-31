#include <stdio.h>

int even(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n - 1; i++){
        if (arr[i]%2 == 0){
            count += 1;
        }
    }
    return count;
}

int odd(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n - 1; i++){
        if (arr[i]%2 != 0){
            count += 1;
        }
    }
    return count;
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d ", even(arr, n));
    printf("%d", odd(arr, n));
    return 0;
}