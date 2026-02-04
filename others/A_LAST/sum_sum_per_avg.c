#include<stdio.h>
int main(){
    float n1,n2,n3,sum,per,avg;
    printf("Enter n1-> ",n1);
    scanf("%f",&n1);
    printf("Enter n2-> ",n2);
    scanf("%f",&n2);
    printf("Enter n3-> ",n3);
    scanf("%f",&n3);
    sum=n1+n2+n3;
    per=sum/300*100;
    avg=sum/3;
    printf("SUM= %.2f\n",sum);
    printf("per %.2f%%\n",per);
    printf("avg= %.2f\n",avg);
    return 0;
}