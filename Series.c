#include<stdio.h>

int main(){
    
    long int i,n,sum=0,term=1;
    printf("Enter Number of Terms->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=term;
        term=term+i;
    }
    printf("The Sum of Series Upto %d Terms is %d\n",n,sum);
    return 0;

}
