#include <stdio.h>

int main() {
    int n, i,t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle potential input errors (negative or zero terms)
    if (n <= 0) {
        printf("Invalid input: Please enter a positive integer.\n");
        return 1; // Indicate error
    }

    // printf("Fibonacci Series: ");

    // Print the first two terms (0 and 1) separately
     for (i = 1; i <= 2 && i <= n; i++) {
         // printf("%d ", t1);
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;
    }

    // Print the remaining terms using the for loop
    for (i = 3; i <= n; i++) {
        // printf("%d ", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    // printf("\n");  // Add a newline for better formatting
    printf("%d",t1);
    return 0;
}
