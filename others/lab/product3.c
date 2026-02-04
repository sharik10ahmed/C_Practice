#include<stdio.h>

int main() {
    int n1, n2, n3, product;
   
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    product = n1 * n2 * n3;
    
    printf("Product: %d\n", product);
    
    return 0;
}