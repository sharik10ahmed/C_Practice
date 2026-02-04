#include<stdio.h>
int main(){
    int n1;
    printf("Enter No 1 -> ");
    scanf("%d",&n1);
    if(n1%2==0){
            printf("%d is even number",n1);
    }
    else{
        printf("%d is odd number",n1);
    }
    return 0;
}