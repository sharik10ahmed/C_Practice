#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push(){
int value;
if(top==MAX-1){
printf("Stack is full\n");
}
else{
printf("Enter value to push: ");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d successfully pushed\n",stack[top]);
}
}
void pop(){
if(top==-1){
printf("Error! stack is Underflow\n");
}
else{
printf("%d popped from stack\n",stack[top]);
top--;
}
}
void display(){
if(top==-1){
printf("Stack is empty\n");
}
else{
printf("Stack elements: \n");
for(int i=top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
}
int main(){
int choice;
while(1){
printf("--- Stack Menu ---\n");
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
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
 printf("Exiting program !\n");
 exit(0);
 default:
 printf("Invalid Choice !\n");
}
}
return 0;
}
