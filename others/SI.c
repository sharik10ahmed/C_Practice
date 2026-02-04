#include<stdio.h>

int main(){
    int p,r,t,si;
    printf("Enter Principle-> ");
    scanf("%d",&p);
    printf("Enter Rate-> ");
    scanf("%d",&r);
    printf("Enter Time-> ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("SI is %d",si);
    return 0;
}