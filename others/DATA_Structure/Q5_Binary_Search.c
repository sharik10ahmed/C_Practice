#include <stdio.h>

int main() {
    int n, i, target, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in SORTED order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    // Binary Search Logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d.\n", mid);
            found = 1;
            break;
        } 
        else if (arr[mid] < target) {
            low = mid + 1;  // Look in the right half
        } 
        else {
            high = mid - 1; // Look in the left half
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}