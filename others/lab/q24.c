#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter the number: ");
    
    // 1. Read the first number and assume it is the Max
    scanf("%d", &max); 

    // 2. Loop through the remaining n-1 numbers
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num; // Update max if new number is bigger
        }
    }

    printf("Maximum number is: %d", max);

    return 0;
}