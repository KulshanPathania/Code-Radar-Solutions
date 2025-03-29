#include <stdio.h>

int arraysorted(int arr; int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }
}

int main(){
    int n;
    int arr;
    scanf("%d", &n);
    printf("%d", arr[i]);
}