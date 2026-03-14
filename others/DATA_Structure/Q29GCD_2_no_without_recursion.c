#include <stdio.h>

int main() {
    int a, b, temp;

    // Get input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Saving the original numbers just so we can print them at the end
    int original_a = a;
    int original_b = b;

    // Iterative Euclidean Algorithm
    while (b != 0) {
        // Step 1: Temporarily hold the value of 'b'
        temp = b; 
        
        // Step 2: Update 'b' to be the remainder
        b = a % b; 
        
        // Step 3: Update 'a' to be the old 'b'
        a = temp;  
    }

    // When the loop finishes (because b == 0), 'a' holds the GCD
    printf("The GCD of %d and %d is %d\n", original_a, original_b, a);

    return 0;
}