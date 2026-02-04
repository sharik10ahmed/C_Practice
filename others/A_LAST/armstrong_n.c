#include<stdio.h>
int main(){
    int i,n,a=0,x,q,r;
    printf("Enter n-> ");
    scanf("%d",&n);
    x=n;
    for(i=1;n!=0;i++){
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