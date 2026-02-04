#include <stdio.h>

int main() {
    // Declare an integer variable to hold the user's age.
    int age;

    // Output: Print a message asking for the user's age.
    printf("What's your age? ");

    // Input: Read the integer entered by the user.
    // The '&' symbol is used to pass the address of the variable.
    scanf("%d", &age);

    // Output: Print a message that includes the user's age.
    printf("You are %d years old.\n", age);

    return 0;
}