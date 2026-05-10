#include <stdio.h>
#include <stdlib.h> // Required for malloc()
int main() {
    int a = 10,*ptr;
    ptr = &a;

    printf("%d\n\n",ptr);
    printf("%d",*ptr);


    return 0;
}