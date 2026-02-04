#include<stdio.h>
int main(){
    int i,n,s=0;
     
    printf("Enter n: ");
    scanf("%d",&n);
    i=1;
    do
    {
        
        printf("%d\n",i);
        s=s+i;
        i=i+2;
    } 
    while (i<n);
    printf("Sum=%d",s);
    return 0;
    
}