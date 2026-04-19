#include <stdio.h>

#define MAX 3 // Small limit to easily test Overflow

// Global Variables
int queue[MAX];
int front = -1;
int rear = -1;

// The ENQUEUE Function
void enqueue() {
    int value;
    
    // Step 1: Check for Overflow
    if (rear == MAX - 1) {
        printf("Error: Queue Overflow! The line is full.\n");
    } 
    // Step 2: If there is space, add the item
    else {
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        
        // Special Case: If this is the very first item being added
        if (front == -1) {
            front = 0; 
        }
        
        rear++;                  // Move the REAR pointer forward
        queue[rear] = value;     // Place the new value at the rear
        
        printf("Success: Enqueued %d. (Front: %d, Rear: %d)\n", value, front, rear);
    }
}

int main() {
    printf("--- Queue Enqueue Demonstration ---\n");
    
    enqueue(); // Attempt 1 (Will succeed)
    enqueue(); // Attempt 2 (Will succeed)
    enqueue(); // Attempt 3 (Will succeed)
    enqueue(); // Attempt 4 (Will trigger Overflow!)

    return 0;
}