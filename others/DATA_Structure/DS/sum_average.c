//Find the Sum and Average of Array Elements

#include<stdio.h>
int main(){
    int i,n,sum=0;
    float avg;
    printf("Enter no. of array elements-> ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:- \n",n);
    for(i=0;i<n;i++){
        printf("Enter element at index %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum= %d\n",sum);
    avg=sum/n;
    printf("Average= %.2f\n",avg);
    return 0;
}