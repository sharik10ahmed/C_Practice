#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    // Step 1: Input the 3x3 Matrix
    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 2: Print Diagonal and Calculate Sum
    printf("Diagonal Elements are: \n");
    
    // SMART LOGIC: We only need one loop because row == col
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);  // Using 'i' for BOTH row and column
        sum = sum + matrix[i][i];     // Add to total
    }

    printf("\nSum of the diagonal elements = %d\n", sum);

    return 0;
}