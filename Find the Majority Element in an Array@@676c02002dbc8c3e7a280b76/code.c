#include <stdio.h>

int majorityelement(int arr[], int n, int num){
    int same = 1;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] == arr[0]){
            same = 0;
            break;
        }
    }
    if (same){
        return arr[n];
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

        printf("%d", majorityelement(arr, n, arr[i]));

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                visible[j] = 1;
            }
        }
    }
}