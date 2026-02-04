#include<stdio.h>

int Fibonacci(int n);

int main(){
    int n;
    printf("Enter Number of Terms -> ");
    scanf("%d",&n);
    printf("THE %d Term is %d",n,Fibonacci(n));
    return 0;
}

int Fibonacci(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int FibNm1= Fibonacci(n-1);
    int FibNm2 = Fibonacci(n-2);
    int FibN = FibNm1 + FibNm2;
    // printf("Fibonacci of %d Terms -> %d\n",n,FibN);
    return FibN;
}