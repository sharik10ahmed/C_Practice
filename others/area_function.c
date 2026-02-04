#include<stdio.h>
#include<math.h>
#define pie 3.14
float square(float side);
float rectangle(float L,float B);
float circle(float r);

int main(){
    float side,L,B,r;
    int ch;
    printf("Functions \n 1.Square\n 2.Rectangle\n 3.Circle\n");
    printf("Enter Your Choice -> ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        square(side);
        break;
    case 2:
        rectangle(L,B);
        break;
    case 3:
        circle(r);
        break;
    default:
        printf("invalid Responce !!!");
        break;
    }
    return 0;
}

float square(float side){
    printf("Enter side length -> ");
    scanf("%f",&side);
    printf("Area of Square -> %.0f \n",pow(side,2));
}
float rectangle(float L,float B){
    printf("Enter Length-> ");
    scanf("%f",&L);
    printf("Enter Breath-> ");
    scanf("%f",&B);
    printf("Area of Rectangle -> %.0f",2*L+B);
}
float circle(float r){
    printf("Enter Radius -> ");
    scanf("%f",&r);
    printf("Area of Circle -> %.3f",pie*pow(r,2));
}