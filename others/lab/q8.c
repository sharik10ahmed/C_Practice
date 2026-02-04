#include<stdio.h>

int main() {
    int m1, m2, m3, sum;
    float percentage, average;
   
    printf("Enter subject marks 1: ");
    scanf("%d", &m1);
    printf("Enter subject marks 2: ");
    scanf("%d", &m2);
    printf("Enter subject marks 3: ");
    scanf("%d", &m3);
    sum = m1 + m2 + m3;
    average = sum / 3.0;
    percentage = (sum / 300.0) * 100.0;
    printf("Total Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}