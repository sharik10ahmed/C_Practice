#include<stdio.h>
int main(){
    int i,n,s;
    printf("Enter n-> ");
    scanf("%d",&n);
    s=1;
    i=0;
    while(i<n)
    {
        i++;
        printf("i=%d\n",i);
        s=s*i;

    }
    printf("factorial=%d",s);
    return 0;
}