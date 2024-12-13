#include <stdio.h>

int sumOfArray(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sumOfArray(arr, n);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
