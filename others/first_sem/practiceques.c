#include <stdio.h>

int main() {
    int n, temp, rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n; // Save the original number

    // Logic to reverse the number
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    // Check if original equals reversed
    if (temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}