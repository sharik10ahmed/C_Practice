#include<stdio.h>
int main(){
int Select,i,n,temp,rev=0,q,r,x,a=0;
printf("Calculator\n1.Palindrome\n2.Armstrong\nEnter Your Choice-> ");
scanf("%d",&Select);
switch(Select){
case 1:
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
break;
case 2:
printf("Enter Number-> ");
scanf("%d",&n);
x=n;
for(i=1;n!=0;i++){
q=n/10;
r=n%10;
a=a+r*r*r;
n=q;
}
if (x==a){
printf("Armstrong");
}
else{
printf("Not Armstrong");
}
break;
default: printf("Invaild");
}
return 0;
}
