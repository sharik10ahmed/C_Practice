#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        printf("%d\n",i);
        s=s+i;
    }
    printf("Sum=%d",s);
    return 0;
    
}