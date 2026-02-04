#include<stdio.h>

int main(){
int math,sci,eng;
printf("enter Math Marks-> ");
scanf("%d",&math);
printf("enter Science Marks-> ");
scanf("%d",&sci);
printf("enter English Marks-> ");
scanf("%d",&eng);

printf("Average-> %d \n",(math+sci+eng)/3);
printf("Sum-> %d",math+sci+eng);

return 0;
}
