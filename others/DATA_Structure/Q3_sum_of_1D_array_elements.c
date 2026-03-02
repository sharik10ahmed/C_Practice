#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter no. of array elements -> ");
    scanf("%d",&n);
    int arr[n];
    printf("%d elements-> ",n);
    for(i=0;i<n;i++){
        printf("Enter %d elements: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("sum of array-> %d",sum);
    return 0;
}