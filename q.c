#include<stdio.h>  
#include <string.h>    

int main(){    
char name[10];    
printf("Enter your name: ");    
gets(name); //reads string from user    
printf("Your name is: ");    
puts(name);  //displays string    
return 0;    
}    