#include<stdio.h>

int main(){
    int a,b,c;
    float Sum,Per;
    printf("Enter Marks of 3 Subjects -> ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Total Marks of 3 Subjects -> %f\n",Sum=(a+b+c));
    printf("Percentage of 3 Subjects -> %f",Per=Sum*100/300);

    return 0;
}