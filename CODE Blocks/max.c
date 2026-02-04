#include<stdio.h>
int main(){
int i,max,num,n;
printf("How many Numbers? ");
scanf("%d",&n);
printf("Enter Numbers-> ");
scanf("%d",&max);
for(i=1;i<n;i++){
scanf("%d",&num);
if(num>max){
max=num;
}
}
printf("Maximum Number-> %d",max);
return 0;
}
