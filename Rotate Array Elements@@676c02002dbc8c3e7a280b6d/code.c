#include <stdio.h>

void rotatearray(int arr[], int n, int d){
    for (int i = 0; i < d; i++){
        int last = arr[n - 1];
        for (int j = n - 1 ; j > 0; j--){
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

void printarray(int arr[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int d;
    scanf("%d", &d);
    rotatearray (arr, n, d);
    printarray (arr, n);
}