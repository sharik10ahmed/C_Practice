#include<stdio.h>
int main(){
int i,n,min,num;
printf("How many numbers? ");
scanf("%d",&n);
printf("Enter Numbers-> ");
scanf("%d",&min);
for(i=1;i<n;i++){
        scanf("%d",&num);
if(num<min){
min=num;
}
}
printf("Minimum Number= %d",min);
return 0;
}
