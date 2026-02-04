#include<stdio.h>

int main(){
    
    int choice;
    printf("Enter Your Choice->");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        case 5:
        printf("Thrusday\n");
        break;
        case 6:
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;
        default:
        printf("Wrong Choice\n");
        break;
    }
    return 0;

}