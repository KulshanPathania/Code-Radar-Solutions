void maxarray(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void minarray(int arr[], int n){
    int min = arr[i - 1];
    for(int i = n; i > 1; i--){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
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
    maxarray(arr, n);
    minarray(arr, n);
    printarray(arr, n);
    return 0;
}