#include <stdio.h> // Required for input (scanf) and output (printf)

int main() {
    int n;                          // The number entered by the user
    int i;                          // The loop counter
    unsigned long long factorial = 1; // Holds the factorial result

    // 1. Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers.
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // 2. Calculate the factorial using a 'for' loop
        // We multiply 'factorial' by each number from 1 up to n.
        // If n is 0, this loop will not run, and the answer will be 1 (which is correct).
        for (i = 1; i <= n; i++) {
            factorial = factorial * i; // or factorial *= i;
        }

        // 3. Print the final result
        // We use %llu because 'factorial' is an 'unsigned long long'
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0; // Indicates successful execution
}