#include<stdio.h>
int main(){
    int i,n,a=0;
    printf("Enter No. -> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            a = a+i;
        }
    }
    printf("Sum of n odd no. -> %d",a);
    return 0;
}