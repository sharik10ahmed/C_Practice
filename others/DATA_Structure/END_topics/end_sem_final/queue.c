#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(){
int value;
if (rear==MAX-1){
printf("Queue is overflow");
}
else{
printf("Enter a value-> ");
scanf("%d",&value);

if(front==-1){
front = 0;
}

rear++;
queue[rear]=value;
printf("%d value is enqueued",value);
}
}
void dequeue(){
if(front==-1){
printf("stack is underflow");
}
else{
printf("Element dequeued is %d",queue[front]);
front++;

if (front > rear){
front=-1;
rear=-1;
}
}
}
void display(){
printf("Elements from front to rear: \n");

for(int i=front;i<=rear;i++){
printf("%d ",queue[i]);
}
}

int main(){
int choice;

while(1){
printf("\nMain Menu\n");
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter a choice-> ");
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
printf("Exiting program...\n");
exit(0);
default:
printf("Invalid choice !");
}
}
return 0;
}
