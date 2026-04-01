#include <stdio.h>
#include <stdlib.h> // Required for the exit() function

void push();
void pop();
void display();

// top must be initialized to -1 for a 0-indexed array
int stack[10], top = -1, element; 

int main() // Standard C requires main to return an int
{
    int ch;
    do
    {
        printf("\n\n\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &ch);
        
        switch (ch)
        {
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
            exit(0); // exit() requires an integer status code
            break;
        default:
            printf("\n\nInvalid entry. Please try again...\n");
        }
    } while (ch != 4); // Added the missing '4' in the while condition

    return 0;
}

void push()
{
    if (top == 9)
        printf("\n\nStack is Full\n");
    else
    {
        printf("\n\nEnter Element: ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
        printf("\n\nElement inserted=%d\n", element);
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("\n\nStack is Empty\n");
    else
    {
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n\nStack is Empty.\n"); // Added missing semicolon
    }
    else
    {
        element = stack[top];
        top--;
        printf("\n\nElement Deleted=%d.\n", element);
    }
}