#include <stdio.h>
#include <stdlib.h>

# define MAX 5

int stack[MAX];
int top = -1;

void push(){
int value;
if (top==MAX-1){
printf("Stack overflow !\n");
}
else{
printf("Enter a value to push-> ");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d is pushed in stack\n",value);
}
}
void pop(){
if (top==-1){
printf("Stack is underflow");
}
else{
printf("popped the value %d",stack[top]);
top --;
}
}
void display(){
printf("Stack elements from top to bottom: \n");
for(int i=top;i>=0;i--){
printf("%d ",stack[i]);
}
}

int main(){
int choice;

while(1){
printf("\nMain Menu\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Enter a choice-> ");
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
exit(0);
default:
printf("Invalid choice!");
}
}
return 0;
}

