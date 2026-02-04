#include<stdio.h>

int main(){
    
    int s,sum,r,f;
    printf("Enter Temperature in Celsius=");
    scanf("%d",s);
    sum=s*9;
    r=sum+32;
    f=r/5;
    printf("Temperature in Fahrenheit=%d",f);
    return 0;

}