#include<stdio.h>

int main(){
    int marks;
    printf("Enter Your marks (0-100) -> ");
    scanf("%d",&marks);
   // if(marks >= 0 && marks <= 30){
   //     printf("Fail\n");
   // } else if(marks > 30 && marks <=100){
   //         printf("Pass\n");
   //     } else {
    //        printf("Ivaild Response");
    //    }
    marks <= 30 ? printf("Fail\n") : printf("Pass\n");
    return 0;
} 