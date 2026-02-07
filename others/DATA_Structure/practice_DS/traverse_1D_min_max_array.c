#include<stdio.h>
int main(){
    int i,n,min,max;
    printf("Enter no. of elements -> ");
    scanf("%d",&n);
    int arr[n];
    printf("%d elements: \n",n);
    for(i=0;i<n;i++){
        printf("Enter elements %d-> ",i);
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("min= %d\n",min);
    printf("max= %d",max);
    return 0;
}