#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base Case: If the remainder becomes 0, 'a' is the GCD
    if (b == 0) {
        return a;
    } 
    // Recursive Case: Call gcd with 'b' and the remainder of 'a % b'
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the recursive function
    result = gcd(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}