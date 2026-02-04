#include<stdio.h>
int main(){
    int i=0,s=1,n;
    printf("Enter - >");
    scanf("%d",&n);
    while(i<n){
        i++;
        printf("i=%d\n",i);
        s = s*i;
    }
    printf("factorial =%d\n",s);
}