#include <stdio.h>

int main() {
    // Declare variables
    int mean, median, mode;

    // Get Median input
    printf("Enter median: ");
    scanf("%d", &median);

    // Get Mode input
    printf("Enter mode: ");
    scanf("%d", &mode);

    // Calculate Mean using Empirical Formula
    // Formula: Mean = (3 * Median - Mode) / 2
    mean = (3 * median - mode) / 2;

    printf("Mean = %d\n", mean);

    return 0;
}