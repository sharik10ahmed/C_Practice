#include<stdio.h>
int main(){
int arr[100],i,n,sum=0;
printf("Count of numbers: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("Sum=%d",sum);
return 0;
}
