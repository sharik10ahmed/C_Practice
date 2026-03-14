#include <stdio.h>

// This is the recursive function
unsigned long long factorial(int n) {
    // 1. Base Case: The stopping point
    if (n == 0 || n == 1) {
        return 1;
    }
    // 2. Recursive Case: The function calls itself
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else {
        // We call the function here
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}