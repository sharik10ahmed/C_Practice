#include <stdio.h>

// Recursive Function
int factorial(int n) {
    if (n == 0)      // BASE CASE: Stop at 0
        return 1;
    else             // RECURSIVE STEP: n * (n-1)!
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d.", num, factorial(num));
    return 0;
}