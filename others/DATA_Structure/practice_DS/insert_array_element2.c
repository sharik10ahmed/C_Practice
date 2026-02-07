#include<stdio.h>
int main(){
    int i,n,target,index;
    printf("Enter no. of elements-> ");
    scanf("%d",&n);
    int arr[n+1];
    printf("%d elements: \n",n);
    for(i=0;i<n;i++){
        printf("Enter elements at index %d-> ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to insert-> ");
    scanf("%d",&target);
    printf("Enter a desired index value 0 to %d -> ",n);
    scanf("%d",&index);
    for(i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=target;

    n++;

    printf("\nUpdated Array\n");
    for(i=0;i<n;i++){
        printf("element at index %d-> %d\n",i,arr[i]);
    }
    return 0;
}