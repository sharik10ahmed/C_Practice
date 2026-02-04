#include<stdio.h>
int main(){
    int a,b,C,sum,diff,prod,quo,rem;
    printf("Enter Your Choice - >");
    scanf("%d",&C);
    
    switch(C){
    case 1:
        printf("Enter First Value ->");
        scanf("%d",&a);
        printf("Enter Second Value ->");
        scanf("%d",&b);
        sum = a+b;
        printf("Sum = %d\n",sum);
        
        break;
    case 2:
        printf("Enter First Value ->");
        scanf("%d",&a);
        printf("Enter Second Value ->");
        scanf("%d",&b);
        diff = a-b; 
        printf("Difference = %d\n",diff);
        break;
    case 3:
        printf("Enter First Value ->");
        scanf("%d",&a);
        printf("Enter Second Value ->");
        scanf("%d",&b);
        prod = a*b;
        printf("Product = %d\n",prod);
        break;
    case 4 :
        printf("Enter First Value ->");
        scanf("%d",&a);
        printf("Enter Second Value ->");
        scanf("%d",&b);
        quo = a/b;
        printf("Quotient = %d\n",quo);
        break;
    case 5:
        printf("Enter First Value ->");
        scanf("%d",&a);
        printf("Enter Second Value ->");
        scanf("%d",&b);
        rem = a%b;
        printf("Remainder = %d\n",rem);
        break;
        default:
        printf("Wrong Choice\n");
        break;
        }
    
   return 0; 
}