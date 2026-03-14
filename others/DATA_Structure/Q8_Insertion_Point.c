#include <stdio.h>

int main() {
    int n, i, j, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort Logic point 1 (Mentioned)
    for(i = 1; i < n; i++) {
        key = arr[i]; // The element to be inserted
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shifting to the right
            j = j - 1;
        }
        
        // Place the key in its correct position
        arr[j + 1] = key;
    }
    // Section 2
    printf("\nSorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");

    return 0;
}