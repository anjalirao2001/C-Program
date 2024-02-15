#include<stdio.h>

int removeDuplicates(int* arr, int n) {
    int i;
    int j = 0;
    int temp[n];
    if (n == 0 && n == 1)
        return n;
    for (i = 0; i < n-1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i;
    // removeDuplicates() returns new size of array.
    n = removeDuplicates(arr, n);

    // Print updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

