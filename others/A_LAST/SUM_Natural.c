#include<stdio.h>
int main(){
    int sum=0,i,n;
    printf("Enter N-> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Sum=%d",sum);
}