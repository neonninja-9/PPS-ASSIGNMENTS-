//Write a C program to find the sum of all odd numbers between 1 to n.
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    printf("Sum of all odd numbers between 1 to %d: %d\n", n, sum);

    return 0;
}
