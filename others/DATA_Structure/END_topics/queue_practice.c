#include<stdio.h>
#include<stdlib.h>

#define max 5

int queue[max];
int front=-1;
int rear=-1;

void enqueue(){
    int value;
    if(rear==max-1){
        printf("Overflow!");
    }
    else{
        printf("Enter a value to enqueue-> ");
        scanf("%d",&value);

        if(front==-1){
            front=0;
        }

        rear++;
        queue[rear]=value;
        printf("%d value successfully inserted",value);
    }
}

void dequeue(){
    if(front==-1){
        printf("underflow!");
    }
    else{
        printf("%d value removed",queue[front]);
        front++;

        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}

void display(){
    if(front==-1){
        printf("Queue is Empty");
    }
    else{
        printf("Queue elements:- \n");
        
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice;

    while(1){
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (Add)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice-> ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exited from Program !\n\n");
            exit(0);
            default:
            printf("Invalid input !");
        }
    }
    return 0;


}