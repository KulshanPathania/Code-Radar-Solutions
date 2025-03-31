#include <stdio.h>

int majorityelement(int arr[], int num){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == num){
            count ++;  
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
    int visible[n];
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(visible[i] == 1){
            continue;
        }
        for(int j = i; j < n; j++){
            if(arr[j] == arr[i]){
                visible[j] = 1;
            }
        }
        printf("%d\n", majorityelement(arr, n, arr[i]));
    }
    return 0;
}