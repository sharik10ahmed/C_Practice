#include<stdio.h>

float Percent(float Sci,float Math,float San);
float main(){
    float Sci=99 ,Math=55,San=75;
    printf("Percentage -> %.2f",Percent(Sci,Math,San));
    return 0;
}

float Percent(float Sci,float Math,float San){
    return ((Sci+Math+San)/3);
}