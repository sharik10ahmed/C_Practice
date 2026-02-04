#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 1 or less are not prime
    }
    if (num <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Divisible by 2 or 3 not prime (except 2, 3)
    }

    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // Divisible by numbers of the form 6k +/- 1
        }
        i += 6;
    }

    return 1; // Prime if not divisible by anything
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}