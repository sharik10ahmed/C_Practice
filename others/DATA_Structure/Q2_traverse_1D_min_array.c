#include<stdio.h>
int main(){
int i,n,min;
printf("Enter no. of elements of the array -> ");
scanf("%d",&n);
int arr[n];
printf("%d elements -> ",n);
for(i=0;i<n;i++){
    printf("Enter array elements %d: ",i);
    scanf("%d",&arr[i]);
}
min = arr[0];
for(i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
printf("Minimum no. in array -> %d",min);
return 0;
}