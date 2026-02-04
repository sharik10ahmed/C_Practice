#include<stdio.h>
int main(){
    int i=0,n,s=0;
   
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        i=i+2;
        printf("%d\n",i);
        s=s+i;
        
    } 
    while (i<n);
    printf("Sum=%d",s);
    return 0;
    
}