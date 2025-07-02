#include <stdio.h>

void reverseIterative(int arr[], int n) {
    int i = 0, j = n - 1, temp;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
}
void reverseRecursive(int arr[], int start, int end) {
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseRecursive(arr, start + 1, end - 1);
}
