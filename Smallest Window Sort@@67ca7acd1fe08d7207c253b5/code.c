void run (int arr[],int n){
    int left = 0;
    int right = n - 1;
    while (arr[left] <= arr[left + 1]){
        left++;
    }
    if (left == n - 1){
        printf("Array is alerady sorted");
    }

    while (arr[right] <= arr[right - 1]){
        right--;
    }
    printf("%d", right - left + 1);
}

void findUnsortedSubarray (){
    int n = sizeof(arr) / sizeof(arr[0]);

    run (arr, n);
}