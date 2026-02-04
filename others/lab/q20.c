#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Water";
    char s2[] = "Water";

    // strcmp returns 0 if exact match
    if (strcmp(s1, s2) == 0) {
        printf("Strings are Equal");
    } else {
        printf("Strings are NOT Equal");
    }

    return 0;
}