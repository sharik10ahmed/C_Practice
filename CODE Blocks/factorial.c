#include<stdio.h>
int main(){
int i,p=1,n;
printf("Enter Number-> ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("%d\n",i);
p=p*i;
}
printf("Factorial-> %d\n",p);
return 0;
}
