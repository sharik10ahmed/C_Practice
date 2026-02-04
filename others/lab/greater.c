#include<stdio.h>

int main() {
    int v1,v2;
    printf("Enter v1: ");
    scanf("%d",&v1);
    printf("Enter n: ");
    scanf("%d",&v2);
    if(v1>v2)
        printf("%d is greater\n",v1);
    else
        printf("%d is greater\n",v2);
    return 0;
}