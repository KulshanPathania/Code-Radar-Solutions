#include <stdio.h>

void rotatearray(int arr[], int n, int d){
    d = d % n;
    for (int i = 0; i < d; i++){
        int last = arr[n - 1];
        for (int j = n - 1; j < 0; j--){
            arr[j + 1] = arr[j];
        }
    }
    arr[0] = last;
}

void printarray(int arr[], int n, int d){
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    int arr[];
    int d;
    scanf("%d", &n);
    scanf("%d", &d);
    rotatearray (arr[], n, d);
    printarray (arr[], n, d);
}