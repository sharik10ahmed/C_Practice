#include<stdio.h>
int main(){
    int q,r,x,a=0,n,i;
    printf("Enter No. -> ");
    scanf("%d",&n);
    x=n;
    for(i=0;n>0;i++){
        q=n/10;
        r=n%10;
        a=a+r*r*r;
        n=q;
    }
    if(x==a){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}