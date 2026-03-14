#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // Step 1: Create (Input) the 2D Array
    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {           // Outer loop for Rows
        for(j = 0; j < 3; j++) {       // Inner loop for Columns
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 2: Traverse (Output) the 2D Array
    printf("\nThe 3x3 Matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); // \t adds a tab space for neat alignment
        }
        printf("\n"); // Move to the next line after a complete row is printed
    }

    return 0;
}