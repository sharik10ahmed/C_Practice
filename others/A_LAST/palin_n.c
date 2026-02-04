#include<stdio.h>
int main(){
    int rev=0,i,n,temp;
    printf("Enter n-> ");
    scanf("%d",&n);
    temp=n;
    for(i=1;n>0;i++){
        rev = (rev*10) + (n%10);
        n=n/10;
    }
    if(rev==temp){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}