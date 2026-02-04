#include<stdio.h>

int Fact(int n);

int main(){
    printf("Factorial -> %d",Fact(3));

    return 0;
}

int Fact(int n){
    if (n==1){
        return 1;
    }
    int Sumpr= Fact(n-1);
    int Sump= Sumpr*n;
    return Sump;
}