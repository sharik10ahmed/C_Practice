#include<stdio.h>
int main(){
    int vari,j,temp,rev=0,o,i,q,r,x,n,a=0;
    printf("Calculator\n1.Palindrome\n2.Armstrong\nEnter Your Choice -> ");
    scanf("%d",&vari);
    switch(vari){
    case 1:
    printf("Enter No. -> ");
    scanf("%d",&o);
    temp=o;
    for(j=1;o>0;j++){
        rev = (rev*10) + (o%10);
        o = o/10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    break;
    case 2:
     printf("Enter No. -> ");
     scanf("%d",&n);
     x=n;
     if(n>999){
     for(i=1;n!=0;i++){
         q=n/10;
         r=n%10;
         a=a+r*r*r*r;
         n=q;
     }
    }
    else{
        for(i=1;n!=0;i++){
         q=n/10;
         r=n%10;
         a=a+r*r*r;
         n=q;
     }
    }
     if(x==a){
         printf("armstrong");
     }
     else{
         printf("Not Armstrong");
     }
    break;
    default: printf("invaild");
    }
     return 0;
 }