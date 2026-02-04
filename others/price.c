#include<stdio.h>
#include<math.h>

float calculationprice(float a);

int main(){
    float price;
    printf("Enter Price -> ");
    scanf("%f",&price);
    float s = calculationprice(price); //argument/actual parameter
    return 0;
}

float calculationprice(float a){ //parameter /formal parameter
a = ceil(a+(0.18*a)); // a/100*18+a (18 percent = 0.18{18/100})
printf("Total Price-> %.2f \n",a);

}