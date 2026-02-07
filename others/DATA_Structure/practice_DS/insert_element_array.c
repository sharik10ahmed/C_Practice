#include<stdio.h>
int main(){
    int i,n,target,index;
    printf("Enter no. of elements-> ");
    scanf("%d",&n);
    int arr[n];
    printf("%d elements: \n",n);
    for(i=0;i<n;i++){
        printf("Enter elements %d-> ",i);
        scanf("%d",&arr[i]);
    }

printf("Enter a number to insert-> ");
scanf("%d",&target);

printf("Enter a desired index value from 0 to %d -> ",n-1);
scanf("%d",&index);

for(i=0;i<n;i++){
    if(index==i){
        arr[i]=target;
    }
}
for(i=0;i<n;i++){
    printf("Value at index %d = %d\n",i,arr[i]);
}
return 0;
}