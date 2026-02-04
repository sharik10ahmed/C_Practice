#include<stdio.h>
int main(){
    int i,n;
    i=0;
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        i=i+1;
        printf("%d\n",i);
    } 
    while (i<n);
    return 0;
    
}