#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX 5 // Maximum size of the stack Pbysical limit

// Global variables
int stack[MAX]; // creates an array named stack with 5 slots
int top = -1; // tells that stack is completely empty

// Function to add an element to the stack
void push() {
    int value; // A temporary container to hold the number the user types in.
    // Check for Overflow
    if (top == MAX - 1) {  // checks if stack is full ?
        printf("Error: Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;                // Move the top pointer up
        stack[top] = value;   // Insert the value at the new top position
        printf("Successfully pushed %d onto the stack.\n", value);
    }
}

// Function to remove the top element from the stack
void pop() {
    // Check for Underflow
    if (top == -1) {
        printf("Error: Stack Underflow! The stack is already empty.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;                // Move the top pointer down
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("Stack elements (Top to Bottom):\n");
        // Loop from the top down to 0
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}