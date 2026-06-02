#include <stdio.h>
#include <stdlib.h> // Required for the exit(0) function

#define MAX 5 // Maximum size of our queue

// Global Variables
int queue[MAX];
int front = -1;
int rear = -1;

// Function to add an element (Insert at Rear)
void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("Error: Queue Overflow! The line is full.\n");
    } else {
        printf("Enter the value to enqueue: ");
        scanf("%d", &value);
        
        if (front == -1) {
            front = 0; // Set front to 0 if this is the very first element
        }
        
        rear++;
        queue[rear] = value;
        printf("Successfully enqueued %d.\n", value);
    }
}

// Function to remove an element (Delete from Front)
void dequeue() {
    if (front == -1) {
        printf("Error: Queue Underflow! The line is already empty.\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++; // Move the front pointer forward to serve the next person
            
        // CRITICAL RESET RULE:
        // If front passes rear, it means we just removed the very last person.
        // We must reset the queue to its original empty state.
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        printf("The queue is completely empty.\n");
    } else {
        printf("Queue elements (Front to Rear): ");
        // Loop starting from the front pointer, ending at the rear pointer
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (Add)\n");
        printf("2. Dequeue (Remove)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: 
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}