#include<stdio.h>

int main(){
    int a,b,max;
    printf("Enter values for a & b -> ");
    scanf("%d%d",&a,&b);
    max= a>b ? a:b; 
    printf("Larger of %d & %d is %d\n",a,b,max);
    return 0;
}

// #include<stdio.h>

// int main(){
//     int age;
//     printf("Enter Your age -> ");
//     scanf("%d",&age);
//     age >= 18 ? printf("You are adult\n") : printf("You are minor");
//     return 0;
// }