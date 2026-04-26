#include<stdio.h>
#include<stdlib.h>

#define max 5

int stack[max];
int top=-1;

void push(){
    int value;
    if (top==max-1){
        printf("Overflow !");
    }
    else{
        printf("Enter value to push-> ");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("%d pushed successfully !",value);
    }
}
void pop(){
    if(top==-1){
        printf("underflow!");
    }
    else{
        printf("%d popped successfully !",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty !");
    }
    else{
        printf("Stack elements from (top to bottom):- \n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int choice;

    while(1){
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice-> ");
        scanf("%d",&choice);

        switch(choice){
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
            printf("Exited from program successfully !");
            exit(0);
            break;
            default:
            printf("Invalid Value !");
        }
    }
    return 0;
}