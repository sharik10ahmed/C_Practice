#include<stdio.h>

void cal(int a, int b, int *sum ,int *prod ,int *avg);

int main(){
    int a=3,b=5,sum,prod,avg;
    cal(a,b,&sum,&prod,&avg);
    printf("sum is %d\n prod is %d\n avg is %d\n",sum,prod,avg);
    return 0;
}

void cal(int a, int b, int *sum ,int *prod ,int *avg){
*sum = a+b;
*prod = a*b;
*avg = (a+b)/2;
}