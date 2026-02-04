#include <stdio.h>

int main(){
    float F;
    printf("Enter Temp in  Fahrenheit -> ");
    scanf("%f",&F);
    printf("Temp in Celsius -> %.2f",(F-32)*5/9);
    return 0;
}