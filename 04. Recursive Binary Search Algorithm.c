#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        return binarySearch(arr, mid + 1, high, x);
    }

    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) printf("Element is not present in array");
    else printf("Element is present at index %d", result);
    return 0;
}
