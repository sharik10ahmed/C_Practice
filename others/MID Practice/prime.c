#include<stdio.h>
int main(){
    int n,d=0,i;
    printf("Enter Positve Integer -> ");
    scanf("%d",&n);
    if(n==1){
        printf("No");
        
    }

    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            d=1;
            break;
        }
    }
    if (d==0){
        printf("yes\n");
    }
    else{
        printf("No");
    }
    return 0;
}