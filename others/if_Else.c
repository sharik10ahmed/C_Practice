#include<stdio.h>

int main(){
    int age;
    printf("Enter Your Age -> ");
    scanf("%d",&age);
    if (age>=18)
    {
       printf("You are Adult\n");
       printf("You can Vote\n");
       printf("You can Drive\n");
    }
   else
   {
    printf("You are Minor\n");
    printf("Just Chill !");
   }
   return 0;
}