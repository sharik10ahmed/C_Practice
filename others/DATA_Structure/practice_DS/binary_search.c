#include<stdio.h>
int main(){
int i,n,target,mid,high,low,found=0;
printf("Enter no. of array elements-> ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
printf("Enter %d element-> ",i);
scanf("%d",&arr[i]);
}
printf("Enter a no. to search-> ");
scanf("%d",&target);
low=0;
high=n-1;
while(low<=high){
mid=(low+high)/2;
if (arr[mid]==target){
printf("Element found at index %d -> %d",mid,arr[mid]);
found=1;
break;
}
else if(arr[mid]< target){
low = mid + 1;
}
else{
high = mid - 1;
}
}
if(!found){
printf("Element not found in the array");
}
return 0;
}
