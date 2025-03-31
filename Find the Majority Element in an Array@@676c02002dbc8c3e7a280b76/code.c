#include <stdio.h>

int majorityelement(int arr[]; int n){
    for (int i = 0; i < n - 1; i++){
        if (arr[0] == arr[i]){
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
        if(visible = 1)
    }
}