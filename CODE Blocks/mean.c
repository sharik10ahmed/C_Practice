#include<stdio.h>
int main(){
int mean,median,mode;
printf("Enter Median-> ");
scanf("%d",&median);
printf("Enter Mode-> ");
scanf("%d",&mode);
mean=(3*median-mode)/2;
printf("Mean= %d\n",mean);
return 0;
}
