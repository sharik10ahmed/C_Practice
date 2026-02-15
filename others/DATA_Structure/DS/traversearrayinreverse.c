// C Program to Traverse an Array in Reverse Order using a for Loop

#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int i,n=sizeof(arr)/sizeof(arr[n]);
for(i=n-1;i>=0;i--){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
