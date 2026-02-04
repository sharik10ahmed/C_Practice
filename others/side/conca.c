#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Hello";
    char str2[]= "Bro";
    strcat(str1,str2);
    printf("Concatenation -> %s",str1); 
    return 0;
}