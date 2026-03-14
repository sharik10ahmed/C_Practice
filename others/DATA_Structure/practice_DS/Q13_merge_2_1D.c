#include<stdio.h>
int main(){
int n1,n2,i;
// first array input
printf("Enter first array size= ");
scanf("%d",&n1);
int array1[n1];
printf("Enter First array elemnts: \n");
for(i=0;i<n1;i++){
printf("element at [%d]-> ",i);
scanf("%d",&array1[i]);
}
// second array
printf("Enter second array size-> ");
scanf("%d",&n2);
int array2[n2];
printf("Enter second array elements: \n");
for(i=0;i<n2;i++){
printf("element at [%d]-> ",i);
scanf("%d",&array2[i]);
}
int mergesize = n1+n2;
int array3[mergesize];
// first array copy
for(i=0;i<n1;i++){
array3[i]=array1[i];
}
// second array copy
for(i=0;i<n2;i++){
array3[i+n1]=array2[i];
}
// print array3
printf("merged array: ");
for(i=0;i<mergesize;i++){
printf("%d ",array3[i]);
}
return 0;
}
