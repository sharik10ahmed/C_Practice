#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    // str1 must be large enough to hold both strings!
    char str1[50] = "Hello "; 
    char str2[] = "World";

    strcat(str1, str2); // Joins str2 to the end of str1

    printf("Result: %s", str1);

    return 0;
}