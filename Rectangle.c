#include<stdio.h>

int main(){
    int a,b; //length
    printf("Enter the length -> ");
    scanf("%d",&a);
    printf("Enter Width -> ");
    scanf("%d",&b);
    printf("Perimeter of Rectangle is -> %d",2*(a+b));
    
    return 0;
}