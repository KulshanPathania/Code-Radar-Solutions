#include <stdio.h>

int peakelement(int arr[], int n){
    int same = 1;
    for (int i = 1; i < n; i++){
        if(arr[i] != arr[0]){
            same = 0;
            break;
        }
    }
    if(same){
        return -1;
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
    printf("%d", arr[peakelement(arr, n)]);
    return 0;
}