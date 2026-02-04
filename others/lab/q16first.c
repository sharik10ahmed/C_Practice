#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, remainder, digits = 0;
    int sum = 0; // Use int for sum

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Step 1: Count the number of digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n; // Reset temp to original number

    // Step 2: Calculate sum based on number of digits
    while (temp != 0) {
        remainder = temp % 10;
        // pow(base, exponent) raises remainder to the power of 'digits'
        sum = sum + pow(remainder, digits); 
        temp = temp / 10;
    }

    if (n == sum)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is NOT an Armstrong number.", n);

    return 0;
}