// C Program to Traverse an Array
// Input: arr[] = [10, 20, 30, 40, 50]
// Output: "10 20 30 40 50 "
// Explanation: Just traverse and print the numbers.

#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int i,n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
