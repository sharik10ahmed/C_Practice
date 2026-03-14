#include<stdio.h>
int main(){
int array[3][3],i,j;
printf("Enter 9 Elements for your array-> \n");
for(i=0;i<3;i++){ // rows
for(j=0;j<3;j++){ // columns
printf("Enter element at [%d][%d]-> ",i,j);
scanf("%d",&array[i][j]);
}
}
for(i=0;i<3;i++){ // rows
for(j=0;j<3;j++){ // columns
printf("%d ",array[i][j]);
}
printf("\n");
}
return 0;
}
