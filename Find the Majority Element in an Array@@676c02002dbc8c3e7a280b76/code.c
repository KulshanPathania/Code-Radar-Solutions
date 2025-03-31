#include <stdio.h>

int majorityelement(int arr[], int n, int num){
    for (int i = 0; i < n - 1; i++){
        if (arr[i] == num){
            return i;
        }
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
    int visible;
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(visible[i] = 1){
            continue;
        }

        printf("%d", majorityelement(arr, n, arr[i]));

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                visible[j] == 1;
            }
        }
    }
}