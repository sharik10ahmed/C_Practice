#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter count of numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the number
        sum = sum + arr[i];    // Add it to sum immediately
    }

    printf("Sum = %d", sum);

    return 0;
}