#include <stdio.h>

int frequency(int arr[], int n, int num){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == num){
            count += 1;
        }
    }
    return count;
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
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

    for (int i = 0; i < n ; i++){
        printf("%d %d\n", arr[i], frequency(arr, n));
    }
    return 0;
}