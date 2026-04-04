#include <stdio.h>

int main() {
    int n, i, j;

    // Step 1: Get the size of the square matrix
    printf("Enter the size of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Step 2: Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Print the Lower Triangular Matrix
    printf("\nThe Lower Triangular Matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            
            // The mathematical condition for elements ABOVE the diagonal
            if(i < j) {
                printf("0\t"); // Force print 0
            } 
            else {
                printf("%d\t", matrix[i][j]); // Print the actual value
            }
            
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}