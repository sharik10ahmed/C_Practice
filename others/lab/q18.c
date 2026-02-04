#include <stdio.h>

int main() {
    int matrix[10][10]; // Define a max size (e.g., 10x10)
    int rows, cols, i, j, sum = 0;

    printf("Enter number of Rows and Columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");
    // Nested loop to navigate the grid
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);     // Read input
            sum = sum + matrix[i][j];       // Add to sum immediately
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}