#include<stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter a positive number-> ");
    scanf("%d",&n);
    if(n==0 || n == 1){
       flag = 1;
    }
    for(i=2; i<=(n/2);i++){
        if(n%i==0)
        {
          flag =1;
          break;
        }}
    if(flag ==0 ){
        printf("%d is prime",n);
    }
        else{
        printf("%d is not prime",n);
        }
    return 0;
}