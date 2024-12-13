#include <stdio.h>

void insert(int *ptr, int element, int index, int size) {
    for (int i = size; i > index; i--) {
        ptr[i] = ptr[i - 1];
    }
    ptr[index] = element;
}

void prinArr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[8] = {1, 4, 65, 67, 7, 8, 8, 4}; 
    int size = 8; 
    printf("Before insertion:\n");
    prinArr(arr, size);
    
    insert(arr, 98, 1, size);
    size++; 
    printf("After insertion:\n");
    prinArr(arr, size);

    return 0;
}