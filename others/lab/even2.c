#include<stdio.h>

int main(){
    int i,n,s=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (i%2==0){
        printf("%d\n",i);
        s=s+i;}
    }
    printf("sum =%d",s);
}