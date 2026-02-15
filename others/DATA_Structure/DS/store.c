// Store and Print Elements of an Array 

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter no. of array elements-> ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        printf("Enter elements at index %d= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array-> ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}