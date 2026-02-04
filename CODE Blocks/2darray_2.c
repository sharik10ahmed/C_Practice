#include<stdio.h>
int main(){
int matrix[10][10],i,j,sum=0,rows,cols;
printf("Enter numbers of rows and cols-> ");
scanf("%d%d",&rows,&cols);
printf("Enter Elements of Matrix-> ");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
scanf("%d",&matrix[i][j]);
sum=sum+matrix[i][j];
}
}
printf("Sum= %d",sum);
return 0;
}
