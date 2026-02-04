#include <stdio.h>
int main() {
 int n, i, sum = 0;
 printf("Enter the count of even numbers (n): ");
 scanf("%d", &n);
 for (i = 1; i <= n;i++) {
printf("%d\n",i*2-1);
 // Adds the next even number (2*i) in each iteration
 sum+=(i*2-1);
 }
 printf("Sum of first %d even numbers is = %d\n", n, sum);
 return 0;
}
