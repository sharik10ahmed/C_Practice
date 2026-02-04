#include<stdio.h>
int sum(int n){
    int s=0,i;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        s=s+i;
    }
    return s;
}
    int main(){
        int n=5;
        printf("Sum=%d",sum(n));
        return 0;
    }
