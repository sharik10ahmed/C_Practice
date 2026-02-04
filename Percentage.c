#include<stdio.h>

int main(){
    
    int a,b,c,Sum;
    printf("Enter Marks for 3 Subjects->");
    scanf("%d%d%d",&a,&b,&c);
    Sum=(a+b+c)/3;
    printf("Percentage of Total Marks=%d\n",Sum);
    Sum=a+b+c;
    printf("Total Marks=%d\n",Sum);
    return 0;

}