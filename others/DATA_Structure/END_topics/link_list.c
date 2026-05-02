#include <stdio.h>
#include <stdlib.h> // Required for malloc()

// Step 1: Create the blueprint for a Node
struct Node {
    int data;
    struct Node* next;
};

// Step 2: Create the Head pointer (Starts empty)
struct Node* head = NULL;

// Step 3: Function to add a new node at the end
void insert(int value) {
    // 3a: Create the new box in memory
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // 3b: If the list is totally empty, make this the first box
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d as the first node.\n", value);
    } 
    // 3c: Otherwise, find the last box and link it to the new box
    else {
        struct Node* temp = head;
        // Keep moving forward until we find the box that points to NULL
        while (temp->next != NULL) {
            temp = temp->next; 
        }
        // Link the last box to our new box
        temp->next = newNode;
        printf("Inserted %d at the end.\n", value);
    }
}

// Step 4: Function to print the list
void display() {
    struct Node* temp = head;
    
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("[%d] -> ", temp->data);
        temp = temp->next; // Move to the next box
    }
    printf("NULL\n\n");
}

int main() {
    printf("--- Linked List Demonstration ---\n");
    
    insert(10);
    insert(20);
    insert(30);
    
    display();

    return 0;
}