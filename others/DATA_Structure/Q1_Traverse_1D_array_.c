#include<stdio.h>
int main(){
int i,n;
printf("Enter no. of elements for your array -> ");
scanf("%d",&n);
int arr[n];
printf("%d elements -> ",n);
// create (input) the array
for(i=0;i<n;i++){
    printf("Elements %d: ",i);
    scanf("%d",&arr[i]);
}
// traverse (output)
printf("Traversing the array-> \n");
for(i=0;i<n;i++){
    printf("Value at index %d = %d\n",i,arr[i]);
}
return 0;
}