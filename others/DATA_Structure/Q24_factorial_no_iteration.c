#include <stdio.h>

int main() {
    int n, i;
    // We use 'unsigned long long' because factorials grow VERY fast
    // and standard 'int' cannot hold values past 12!
    unsigned long long fact = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Factorials for negative numbers don't exist in standard math
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else {
        // Iterative logic to calculate factorial
        for (i = 1; i <= n;i++) {
            fact = fact * i; 
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}