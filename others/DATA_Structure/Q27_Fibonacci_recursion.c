#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // 1. Base Cases
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    // 2. Recursive Case
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    
    // We use a loop to ask the recursive function for each term, one by one
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");

    return 0;
}