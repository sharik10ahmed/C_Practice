#include<stdio.h>
int main(){
    int i,n,a=1;
    printf("Enter No. -> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            a = a*i;
        
    }
    printf("Sum of n odd no. -> %d",a);
    return 0;
}