#include<stdio.h>
int main(){
int matrix[10][10],rows,cols,i,sum=0,j;
printf("Enter Numeber of rows and cols -> ");
scanf("%d%d",&rows,&cols);
printf("Enter Elements of matrix -> ");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
scanf("%d",&matrix[i][j]);
sum=sum+matrix[i][j];
}
}
printf("Sum of all Elements= %d",sum);
return 0;
}
