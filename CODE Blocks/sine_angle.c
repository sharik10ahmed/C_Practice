#include<stdio.h>
#include<math.h>
int main(){
double y,z,x,result;
x=2.3;
result=sin(x);
printf("sin(%.2lf)=%.2lf\n",x,result);
y=-2.3;
result=sin(y);
printf("sin(%.2lf)=%.2lf\n",y,result);
z=0;
result=sin(z);
printf("sin(%.2lf)=%.2lf\n",z,result);
return 0;
}
