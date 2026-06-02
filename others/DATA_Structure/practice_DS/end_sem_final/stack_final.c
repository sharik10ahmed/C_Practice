#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push(){
int value;
if(top==MAX-1){
printf("Error! Overflow");
}
else{
printf("Enter a value to push-> ");
scanf("%d",&value);
top++;
printf("%d pushed",value);
stack[top]=value;
}
}
void pop(){
if(top==-1){
printf("Stack is underflow!");
}
else{
printf("%d popped",stack[top]);
top--;
}
}
void display(){
if(top==-1){
printf("Stack is empty!\n");
}
else{
printf("stack elements: \n");
for(int i=top;i>=0;i--){
printf("%d ",stack[i]);
}
}
}

int main(){
int choice;

while(1){
printf("\nMain Menu\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
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
printf("Exiting program");
exit(0);
default:
printf("Invalid choice!");
}
}
return 0;
}
