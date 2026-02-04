#include<stdio.h>
int main(){
int arr[100],i,n,sum=0;
printf("Count of Numbers: ");
scanf("%d",&n);
printf("Enter Numbers %d = ",n);
for(i=1;i<n;i++){
scanf("%d",&arr[i]);
sum=arr[i]+sum;
}
printf("Sum of Array= %d",sum);
return 0;
}
