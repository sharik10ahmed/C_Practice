#include <stdio.h>
#include <string.h> // Required library

int main() {
    char source[] = "Solution";
    char destination[10]; // Must be big enough to hold the source

    // Copies 'source' INTO 'destination'
    strcpy(destination, source); 

    printf("Copied String: %s", destination);

    return 0;
}