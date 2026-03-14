#include<stdio.h>
unsigned long long factorial(int n){
if(n == 0 | n == 1 ){
return 1;
}
else{
return n*factorial(n-1);
}
}

int main(){
int num;
printf("enter a positive no.-> ");
scanf("%d",&num);
if(num < 0){
printf("Error! negative no.");
}
else{
unsigned long long result=factorial(num);
printf("factorial of %d-> %llu",num,result);
}
return 0;
}