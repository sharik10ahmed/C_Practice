// To find the maximum and minimum elements in a C array

#include<stdio.h>
int main(){
    int i,min,max,arr[]={10,20,50,40};
    int n=sizeof(arr)/sizeof(arr[n]);
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("min=%d\n",min);
    printf("max=%d\n",max);
    return 0;
}