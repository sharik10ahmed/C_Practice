#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";

    strrev(str); // Reverses directly (Non-Standard)

    printf("Reversed String: %s", str);

    return 0;
}