#include<stdio.h>
int main(){
    int q,r,x,n=153,a=0;
    x=n;
    do{
        q=n/10; 
        r=n%10;
        a = a+r*r*r;
        n=q;
    }
    while(q !=0);
    if(x==a){
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}