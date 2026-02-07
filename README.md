# 👋 About Me

Welcome to my personal **C & Data Structures** repository!

I am **Sharik Ahmed**, a BCA student specializing in AI/ML at Shobhit University. I am passionate about understanding the low-level logic of computers, memory management, and algorithmic thinking. 

This repository serves as a central hub for my C programming experiments, covering everything from basic syntax to complex Data Structures and Algorithms (DSA).

## 🚀 What's Inside?

This collection represents my journey in mastering C. You will find code covering the following key areas:

### 🧠 Core C Logic
* **Fundamentals:** Loops, Switch Cases, and Pattern Printing logic.
* **Arrays & Strings:** Matrix operations and string manipulation without standard libraries.
* **Pointers:** Deep dive into memory addresses, pointer arithmetic, and pass-by-reference.

### 🏗️ Data Structures (DS)
* **Linear DS:** Implementations of Linked Lists (Singly/Doubly), Stacks, and Queues.
* **Non-Linear DS:** Exploration of Trees and Binary Search Trees (BST).

### ⚡ Algorithms
* **Sorting:** Bubble Sort, Selection Sort, Insertion Sort, and Quick Sort.
* **Searching:** Efficiently finding data using Binary Search techniques.

## 💻 Tech Stack & Tools

* **Language:** C (Standard C99/C11)
* **Compiler:** GCC (MinGW)
* **Editor:** VS Code
* **Focus:** Logic Building & System Efficiency

## 📝 A Sneak Peek

Here is a glimpse of the coding style you'll find here:

```c
// Example: A simple node structure for a Linked List
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
