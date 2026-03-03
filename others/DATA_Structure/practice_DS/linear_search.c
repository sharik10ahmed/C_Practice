#include<stdio.h>
int main(){
int i,n,target,found=0;
printf("Enter no. of array elements-> ");
scanf("%d",&n);
int arr[n];
printf("%d elements:- ",n);
for(i=0;i<n;i++){
printf("Enter %d element-> ",i);
scanf("%d",&arr[i]);
}
printf("Enter a no. to search for-> ");
scanf("%d",&target);

for(i=0;i<n;i++){
if(arr[i]==target){
printf("No. found at index %d and is %d",i,arr[i]);
found=1;
break;
}
}
if(!found){
printf("No. not found in array");
}
return 0;
}
