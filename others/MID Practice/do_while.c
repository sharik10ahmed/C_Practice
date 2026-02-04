#include<stdio.h>
int main(){
    int i=0,s=1,n;
    printf("Enter -> ");
    scanf("%d",&n);
    do{
        i;
        printf("i=%d\n",i);
        s = s*i;
    }
    while(i<n);
    printf("Fatorial -> %d",s);
    return 0;
}