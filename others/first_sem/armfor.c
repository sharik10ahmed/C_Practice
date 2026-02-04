#include<stdio.h>
int main(){
    int i,q,r,x,n,a=0;
    printf("Enter No.-> ");
    scanf("%d",&n);
    x=n;
    if(n>999){
    for(i=1;n!=0;i++){
        q=n/10;
        r=n%10;
        a=a+r*r*r*r;
        n=q;
    }
}
else{
    for(i=1;n!=0;i++){
        q=n/10;
        r=n%10;
        a=a+r*r*r;
        n=q;
    }
}
    if(x==a){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    
    return 0;
}