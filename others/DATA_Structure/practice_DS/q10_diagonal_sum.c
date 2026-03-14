#include<stdio.h>
int main(){
int array[3][3],i,j,sum=0;
printf("Enter 9 elements for array: \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Enter element at [%d][%d]-> ",i,j);
scanf("%d",&array[i][j]);
}
}
printf("Diagonal Elements are: \n");
for(i=0;i<3;i++){
printf("%d ",array[i][i]);
sum+=array[i][i];
}
printf("\nSum of elements-> %d",sum);
return 0;
}
