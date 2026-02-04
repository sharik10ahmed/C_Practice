#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character -> ");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Its an Uppercase Letter\n");
    } else if (ch >= 'a' && ch <= 'z'){
    printf("Its an Lowercase Letter\n");
    } else {
        printf("Its not an English Letter");
    }
    return 0;
}