#include <stdio.h>

void rotatearray(int arr[], int n, int d){
    d = d % n;
    for (int i = 0; i < d; i++){
        int last = arr[n - 1];
        for (int j = n - 1; j < 0; j--){
            arr[j + 1] = arr[j];
        }
        arr[0] = last;
    }
}

int main(){
    int n;
    int arr[n];
    int d;
    scanf("%d", &d);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    rotatearray (arr, n, d);
}