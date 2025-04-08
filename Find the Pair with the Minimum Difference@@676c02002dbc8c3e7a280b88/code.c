#include <stdio.h>

void sortarray(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}

int mindiff(int arr[], int n){

    sortarray(arr, n);

    int min = arr[1] - arr[0];
    int a = arr[0];
    int b = arr[1];

    for (int i = 1; i < n - 1; i++){
        int diff = arr[i + 1] - arr[i];
        if(diff < min){
            min = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    printf("%d %d\n", a, b);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", mindiff(arr, n));
    return 0;
}