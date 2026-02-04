#include<stdio.h>
int main(){
    int matrix[10][10],rows,cols,i,j,n,sum=0;
    printf("Enter number of rows and cols -> ");
    scanf("%d %d",&rows,&cols);
    printf("Enter number of elements -> ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }
    printf("Sum=%d",sum);
}