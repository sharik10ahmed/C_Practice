#include <stdio.h>

#define MAX 3 // We set a small limit (3) to test Overflow easily

// Global Variables
int stack[MAX];
int top = -1;

// The PUSH Function
void push() {
    int value;
    
    // Step 1: Check for Overflow
    if (top == MAX - 1) {
        printf("Error: Stack Overflow! Cannot add more items.\n");
    } 
    // Step 2: If there is space, add the item
    else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        
        top++;               // Move the pointer UP one step
        stack[top] = value;  // Place the new value in that empty slot
        
        printf("Success: Pushed %d. (Top is now at index %d)\n", value, top);
    }
}

int main() {
    printf("--- Stack Push Demonstration ---\n");
    
    push(); // Attempt 1 (Will succeed)
    push(); // Attempt 2 (Will succeed)
    push(); // Attempt 3 (Will succeed)
    push(); // Attempt 4 (Will trigger Overflow!)

    return 0;
}