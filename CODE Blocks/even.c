#include<stdio.h>
int main(){
int i,s=0,n;
printf("Enter number-> ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if (i%2==0){
printf("%d\n",i);
s=s+i;
}
}
printf("Sum=%d\n",s);
}

