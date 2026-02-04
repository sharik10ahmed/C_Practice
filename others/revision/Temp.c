#include<stdio.h>
int main(){
    float C;
    printf("Enter Temperature in Celsius -> ");
    scanf("%f",&C);
    printf("Tempearature in Celsius -> %.2f",C*9/5+32);
    return 0;

}