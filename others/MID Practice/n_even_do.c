#include<stdio.h>
int main(){
    int i=0,n,s=0,a;
    printf("Enter -> ");
    scanf("%d",&n);
    do{
        i=i+2;
        s=s+i;
        a=s/n;
    }
    while(i<n);
    printf("sum = %d\n",s);
    printf("avg = %d",a);
    return 0;
}