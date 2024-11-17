//Write a program to input five numbers (integer numbers) and find out their average.
#include <stdio.h>

int main() {
    int numbers[5], sum = 0;
    float average;
    
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    average = sum / 5.0;
    printf("Average: %.2f\n", average);
    
    return 0;
}
