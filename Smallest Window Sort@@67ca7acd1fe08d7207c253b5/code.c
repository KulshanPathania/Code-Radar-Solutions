int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;

    // Find the left boundary
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    }

    // If the array is already sorted
    if (left == -1) {
        return 0;
    }

    // Find the right boundary
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            right = i;
            break;
        }
    }

    // Find min and max in the window
    int min = arr[left], max = arr[right];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand left boundary considering repeated values
    while (left > 0 && arr[left - 1] > min) {
        left--;
    }
    while (left > 0 && arr[left - 1] == min) {  // Handle duplicates
        left--;
    }

    // Expand right boundary considering repeated values
    while (right < n - 1 && arr[right + 1] < max) {
        right++;
    }
    while (right < n - 1 && arr[right + 1] == max) {  // Handle duplicates
        right++;
    }
    return right - left + 1;
}
