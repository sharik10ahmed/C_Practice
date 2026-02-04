#include<stdio.h>
int main(){
    int arr[5],i,sum=0;
    printf("Enter 5 elements in array ->\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of all elements in array = %d\n",sum);
    return 0;
    
    
}