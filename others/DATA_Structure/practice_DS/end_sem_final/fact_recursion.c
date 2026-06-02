#include<stdio.h>
unsigned long long factorial(int n){
if(n == 1 || n == 0 ){
return 1;
}
else{
return n*factorial(n-1);
}
}

int main(){
int num;
unsigned long long result;
printf("Enter num-> ");
scanf("%d",&num);
if(num<0){
printf("negative num!");
}
else{
result = factorial(num);
printf("Factorial of %d is %llu",num,result);

}
return 0;
}
