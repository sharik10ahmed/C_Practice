#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initial array
    int n = 5; // Current number of elements
    int pos, value, i;

    // Display original array
    printf("Original Array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    // Loop runs from the last element down to the position
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[pos - 1] = value;
    n++; // Increase total count

    // Display new array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}