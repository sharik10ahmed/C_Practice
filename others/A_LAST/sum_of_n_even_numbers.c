#include<stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter n-> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
        printf("%d\n",i);
        sum=sum+i;
        } 
    }
    printf("SUM=%d",sum);
    return 0;
}