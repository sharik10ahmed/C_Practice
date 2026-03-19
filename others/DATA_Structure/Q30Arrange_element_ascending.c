#include <stdio.h>

int main() {
    int n, i, j, temp, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for their sorting preference
    printf("Enter 1 for Ascending or 2 for Descending order: ");
    scanf("%d", &choice);

    // Bubble Sort Logic combined with User Choice
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            
            // Ascending Order Logic (Swap if left > right)
            if (choice == 1 && arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Descending Order Logic (Swap if left < right)
            else if (choice == 2 && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}