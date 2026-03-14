#include <stdio.h>

int main() {
    int n1, n2, i;

    // Step 1: Input for the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Step 2: Input for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Step 3: Create the merged array
    int mergedSize = n1 + n2;
    int arr3[mergedSize];

    // Step 4: Copy first array into arr3
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Step 5: Copy second array into arr3
    // We place arr2[i] at position (n1 + i) in arr3
    for(i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i]; 
    }

    // Step 6: Print the merged array
    printf("\nThe Merged Array is:\n");
    for(i = 0; i < mergedSize; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}