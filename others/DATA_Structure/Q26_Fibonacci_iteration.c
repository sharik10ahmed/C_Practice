#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Loop to generate the series
    for (i = 1; i <= n;i++){
        
        // For the first two terms, we just print t1 and t2 directly
        if (i == 1) {
            printf("%d ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d ", t2);
            continue;
        }
        
        // Calculate the next term
        nextTerm = t1 + t2;
        
        // Print the next term
        printf("%d ", nextTerm);
        // Shift the variables forward for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
    return 0;
}