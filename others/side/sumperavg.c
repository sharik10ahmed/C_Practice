#include<stdio.h>
int main(){
    int s1,s2,s3,sum,avg;
    float per;
    printf("Enter sub 1 marks -> ");
    scanf("%d",&s1);
    printf("Enter sub 2 marks-> ");
    scanf("%d",&s2);
    printf("Enter sub 3 marks -> ");
    scanf("%d",&s3);
    sum=s1+s2+s3;
    avg=sum/3;
    per=(sum/300.0)*100.0;
    printf("Sum= %d\n",sum);
    printf("Average -> %d\n",avg);
    printf("Percentage -> %%%.2f",per);


    return 0;
}