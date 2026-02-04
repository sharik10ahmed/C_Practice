#include<stdio.h>
int main(){
    int i,temp,n,rev=0;
    printf("Enter Number -> ");
    scanf("%d",&n);
    temp=n;
    for(i=1;n>0;i++){
        rev = (rev*10) + (n%10);
        n=n/10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}