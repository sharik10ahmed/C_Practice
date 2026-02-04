#include<stdio.h>

int main(){
    int a,b;
    printf("Enter First Number -> ");
    scanf("%d",&a);
    printf("Enter Second Number -> ");
    scanf("%d",&b);
    printf("Sum->%d\nDifference -> %d\nProduct -> %d",a+b,a-b,a*b);
    return 0;
}