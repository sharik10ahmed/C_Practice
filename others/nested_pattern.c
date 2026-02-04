#include <stdio.h>

int main() {
    int rows; // Number of rows (can be changed)

    // Outer loop iterates for each row
    for (int i = 1; i <=4; i++) {
        // Inner loop prints five stars in each row
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        // Move to the next line after printing stars
        printf("\n");
    }

    return 0;
}