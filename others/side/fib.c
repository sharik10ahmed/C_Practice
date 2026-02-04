#include<stdio.h>
int main(){
    int i,a=0,b=1,next;
    printf("Fibonacci Series -> ");
    for(i=0;i<10;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}