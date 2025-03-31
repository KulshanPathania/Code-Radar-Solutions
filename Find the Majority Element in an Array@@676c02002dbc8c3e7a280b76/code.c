#include <stdio.h>

int majorityelement(int arr[], int n){
    int same = 1;
    for (int i = 0; i < n; i++){
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
        for(int j = i; j < n; j++){
            if(arr[j] == arr[i]){
                visible[j] = 1;
            }
        }
        printf("%d\n", majorityelement(arr, n));
    }
    return 0;
}