#include<stdio.h>
int main(){
    int i,n,target,index;
    printf("Enter no. of array elements-> ");
    scanf("%d",&n);
    printf("Enter %d Elements:- \n",n);
    int arr[n+1];
    for(i=0;i<n;i++){
        printf("Enter element at index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a no. to be inserted-> ");
    scanf("%d",&target);
    printf("Enter index no. from 0 to %d -> ",n);
    scanf("%d",&index);
    for(i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=target;
    n++;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}