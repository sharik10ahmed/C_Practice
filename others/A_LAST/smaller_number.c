#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter n1-> ");
    scanf("%d",&n1);
    printf("Enter n2-> ");
    scanf("%d",&n2);
    if(n1<n2){
        printf("%d is smaller than %d",n1,n2);
    }
    else{
        printf("%d is smaller than %d",n2,n1);
    }
    return 0;
}