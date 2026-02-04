#include<stdio.h>
int main(){
    int matrix[10][10];
    int i,j,rows,cols,sum=0;
    printf("Enter rows and cols -> ");
    scanf("%d %d",&rows,&cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }
    printf("Sum of all Elements - > %d",sum);
    return 0;
}