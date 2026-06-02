#include<stdio.h>

int main(){
int a,b,temp;

printf("Enter 2 positive numbers-> ");
scanf("%d %d",&a,&b);
int A=a;
int B=b;
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
printf("GCD of %d and %d is %d",A,B,a);
return 0;
}
