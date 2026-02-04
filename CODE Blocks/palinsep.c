#include<stdio.h>
int main(){
int i,n,temp,rev=0;
printf("Enter Number-> ");
scanf("%d",&n);
temp=n;
for(i=1;n>0;i++){
rev = (rev*10) + (n%10);
n = n/10;
}
if (temp==rev){
printf("Palindrome");
}
else{
printf("Not Palindrome");
}
return 0;
}
