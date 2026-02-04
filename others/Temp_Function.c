#include<stdio.h>

float Temp(float T);

int main(){
    float far = Temp(2);
    // printf("Enter Temperature in Celsius -> ");
    // scanf("%f",&T);
    printf("Temperature in Fahrenheit -> %.2f",far);

    return 0;
}

float Temp(float T){
    float far = T*(9.0/5.0)+32;
    return far;
}