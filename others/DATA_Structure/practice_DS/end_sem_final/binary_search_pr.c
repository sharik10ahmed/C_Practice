#include<stdio.h>
int main(){
int i,n,high,mid,low,target,found=0;
printf("Enter array size-> ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements in sorted order: \n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Enter element to search-> ");
scanf("%d",&target);

low=0;
high=n-1;

while(low<=high){
mid=(low+high)/2;
if(arr[mid]==target){
printf("found at %d index and value is %d",mid,arr[mid]);
found=1;
break;
}
else if(arr[mid]<target){
low=mid+1;
}
else{
high=mid-1;
}
}
if(!found){
printf("element not found\n");
}
return 0;
}
