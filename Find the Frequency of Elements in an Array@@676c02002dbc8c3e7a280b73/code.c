#include <stdio.h>

int frequency(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == arr[0]){
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

    printf("%d %d\n", arr[n], frequency(arr, n));
    return 0;
}