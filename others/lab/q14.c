#include <stdio.h>

int main() {
    int a = 0, b = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", a); // Print the current number
        next = a + b;     // Calculate the next number
        a = b;            // Shift a to b
        b = next;         // Shift b to the new number
    }

    return 0;
}