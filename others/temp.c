#include<stdio.h>

int main(){
    float f,C;
    printf("Enter Temperature in Celsius-> ");
    scanf("%f",&C);
    f=(C*9/5)+32;
    printf("Temperature is %.2f",f);
    return 0;
}

// int main() {
//     float celsius, fahrenheit;

//     // Prompt the user to enter the temperature in Celsius
//     printf("Enter the temperature in Celsius: ");

//     // Read the temperature in Celsius
//     scanf("%f", &celsius);

//     // Convert Celsius to Fahrenheit using the formula
//     fahrenheit = (celsius * 9.0 / 5.0) + 32;

//     // Print the temperature in Fahrenheit
//     printf("Temperature in Fahrenheit is %f\n",fahrenheit);

//     return 0;
// }