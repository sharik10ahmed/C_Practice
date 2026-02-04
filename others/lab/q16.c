#include <stdio.h>

int main() {
    int n, remainder, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // Save original number to compare later

    while (n > 0) {
        remainder = n % 10;          // Get the last digit
        sum = sum + (remainder * remainder * remainder); // Cube it and add to sum
        n = n / 10;                  // Remove the last digit
    }

    if (temp == sum)
        printf("It is an Armstrong Number");
    else
        printf("It is NOT an Armstrong Number");

    return 0;
}