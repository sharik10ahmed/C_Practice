#include <stdio.h>

int main() {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);  // Read a character

    // %d prints the integer value (ASCII) of the character
    printf("ASCII value of %c is %d", c, c);

    return 0;
}