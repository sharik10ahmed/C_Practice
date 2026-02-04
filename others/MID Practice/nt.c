#include <stdio.h>
int main() {
 int n, i, sum = 0;
 printf("Enter a positive integer (n): ");
 scanf("%d",&n);
 // Loop runs from 1 to n
 for (i = 1; i <= n;i++) {
 sum += i; // Adds each number to the sum
 }
 printf("Sum of first %d natural numbers is = %d\n", n, sum);
 return 0;
}
