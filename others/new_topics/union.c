#include <stdio.h>

union Data {
    int i;      // 4 bytes
    float f;    // 4 bytes
    char str[20]; // 20 bytes (Largest member)
};              // Total size: 20 bytes

int main() {
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i); // Works perfectly

    data.f = 220.5;
    printf("data.f: %.1f\n", data.f); // Works perfectly

    // BUT, if we try to access data.i now, it will be corrupted/meaningless
    // because data.f overwrote that shared memory space.
    printf("data.i after setting float: %d\n", data.i); 

    return 0;
}