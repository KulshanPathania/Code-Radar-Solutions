#include <stdio.h>

int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    scanf("%d", &arr[n]);
    bubbleSort(arr,n);
    for (int i = 1; i < n-1; i++){
        printf("%d", arr[i]);
    }
    return 0;
}