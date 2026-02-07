#include<stdio.h>
int main(){
    int i,n,sum=0,avg;
    printf("Enter no of elements-> ");
    scanf("%d",&n);
    int arr[n];
    printf("%d elements: \n",n);
    for(i=0;i<n;i++){
        printf("Elements %d= ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    avg=sum/n;
    printf("Sum= %d\n",sum);
    printf("Average= %d\n",avg);
    return 0;
}