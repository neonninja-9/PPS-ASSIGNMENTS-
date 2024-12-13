#include <stdio.h>
#include <math.h>


void calculateRoots(int coefficients[3]) {
    int a = coefficients[0];
    int b = coefficients[1];
    int c = coefficients[2];
    
    int discriminant = b * b - 4 * a * c;// b^2 - 4ac

    if (discriminant == 0) {
        printf("Discriminant (D) = %d\n", discriminant);
        printf("The equation has one real solution (a double root).\n");
       
        double root = (double)(-b) / (2 * a);
        printf("Root: %.2f\n", root);
    } 
    else if (discriminant > 0) {
        printf("Discriminant (D) = %d\n", discriminant);
        printf("The equation has two distinct real solutions.\n");
  
        double root1 = ((-b) - sqrt(discriminant)) / (2 * a);
        double root2 = ((-b) + sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
    } 
    else {
        printf("Discriminant (D) = %d\n", discriminant);
        printf("The equation has two complex (non-real) solutions.\n");
    }
}

int main() {
    int testCases;
    printf("Enter the number of test cases: ");
    scanf("%d", &testCases);

    while (testCases--) {
        int coefficients[3];
        for (int i = 0; i < 3; i++) {
            printf("Enter coefficient %d: ", i + 1);
            scanf("%d", &coefficients[i]);
        }
        calculateRoots(coefficients);
    }
    
    return 0;
}