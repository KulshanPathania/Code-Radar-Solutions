void run (int arr[],int n){
    int left = 0;
    int right = n - 1;
    while (left < n - 1 && arr[left] <= arr[left + 1]){
        left++;
    }
    if (left == n - 1){
        printf("Array is alerady sorted");
    }

    while (right > 0 && arr[right] <= arr[right - 1]){
        right--;
    }
    printf("%d", right - left + 1);
}

int findUnsortedSubarray (){
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);

    run (arr, n);
}