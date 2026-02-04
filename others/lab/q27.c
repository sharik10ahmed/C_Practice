#include <stdio.h>
#include <math.h> // Required for sin(), cos(), etc.

int main() {
    double x, result;

    // Case 1: Positive number
    x = 2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    // Case 2: Negative number
    x = -2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    // Case 3: Zero
    x = 0;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);

    return 0;
}