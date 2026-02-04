#include <stdio.h>

int main() {
    int n, i, j, min_idx, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    scanf("%d",&arr[i]); 
}
    // Selection Sort Logic
    for(i = 0; i < n - 1; i++) {
        // Assume the first element of the unsorted part is the minimum
        min_idx = i;

        // Check the rest of the array to find the true minimum
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j; // Update index of new minimum found
            }
        }

        // Swap the found minimum element with the first element
        // ONLY if the minimum isn't already in the right place
        if(min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}