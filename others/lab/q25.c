#include <stdio.h>

int main() {
    int n, i, num, min;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter the numbers: ");

    // 1. Read the first number and set it as the starting Min
    scanf("%d", &min);

    // 2. Loop through the remaining numbers
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num; // Update min if new number is smaller
        }
    }

    printf("Minimum number is: %d", min);

    return 0;
}