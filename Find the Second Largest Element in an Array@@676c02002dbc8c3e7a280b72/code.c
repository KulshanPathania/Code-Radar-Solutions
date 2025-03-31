#include <stdio.h>

int secondmax(int arr[], int n){
    if (n < 2){
        return -1;
    }
    int max = arr[0];
    int secondmax = -20;
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i] > secondmax && arr[i] < max){
            secondmax = arr[i];
        }
    }
    return secondmax;
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
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", secondmax(arr, n));
    
}