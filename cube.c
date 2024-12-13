#include <stdio.h>
#include <math.h>
int cube(int num)
{
    return pow(num, 3);
}
int main()
{
    int num = 5;
    printf("thr cube of %d is %d\n", num, cube(num));

    return 0;
}