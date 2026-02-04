 #include <stdio.h>
 int main() {
 int n, i;
 // Factorial can get very large, so use long long
 int factorial = 1;
 printf("Enter an integer (n): ");
 scanf("%d", &n);
 // Loop from 1 to n to calculate factorial
 for (i = 1; i <= n;i++) {
 factorial *= i; // factorial = factorial * i
 }
 printf("Factorial of %d = %d\n", n, factorial);
 return 0;
}