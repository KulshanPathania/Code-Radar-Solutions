void bubbleSort (int arr[],int n){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i - 1){
            if (arr[j] > arr[j + 1]){
                int arr[j] = temp;
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}