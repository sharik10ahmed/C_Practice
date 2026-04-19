#include <stdio.h>

#define MAX 3 

// Global Variables (We are pre-filling the stack for this test)
int stack[MAX] = {10, 20, 30};
int top = 2; // Pointing to index 2, meaning the stack is currently full

// The POP Function
void pop() {
    // Step 1: Check for Underflow
    if (top == -1) {
        printf("Error: Stack Underflow! Nothing left to pop.\n");
    } 
    // Step 2: If not empty, remove the item
    else {
        // We print the value BEFORE we decrease the top pointer
        printf("Success: Popped %d. ", stack[top]);
        
        top--;  // The magic step: Move the pointer DOWN one step
        
        printf("(Top is now at index %d)\n", top);
    }
}

int main() {
    printf("--- Stack Pop Demonstration ---\n");
    
    pop(); // Attempt 1 (Will succeed, removes 30)
    pop(); // Attempt 2 (Will succeed, removes 20)
    pop(); // Attempt 3 (Will succeed, removes 10)
    pop(); // Attempt 4 (Will trigger Underflow!)

    return 0;
}