#include <stdio.h>
#include <string.h> // Required for strlen

int main() {
    char str[] = "Coding";
    
    // strlen calculates length automatically
    int len = strlen(str);

    printf("Length of string: %d", len); // Output: 6

    return 0;
}