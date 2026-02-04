#include<stdio.h>

int main(){
    // in order
    // for (int i=1; i<=6;i++)
    // in reverse order
    for(int i=6; i>=1; i--)
    {
        for(int j=1; j<=i; j++){
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}