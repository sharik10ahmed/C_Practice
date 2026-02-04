#include<stdio.h>
int main(){
    int i,s=0,n;
    printf("Enter n -> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum of n natural numbers - > %d",s);
    return 0;
}