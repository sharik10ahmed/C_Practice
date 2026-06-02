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
    for(i=1;i<n;i++){     // 0  1  2  3
        if(min>arr[i]){   // 10 20 30 40   arr[0]=max=10
            min=arr[i];   // 10<
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("min= %d\n",min);
    printf("max= %d",max);
    return 0;
}