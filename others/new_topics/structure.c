#include <stdio.h>
#include <string.h>

struct Student {
    int id;         // 4 bytes
    char name[20];  // 20 bytes
    float gpa;      // 4 bytes
};                  // Total size: ~28 bytes

int main() {
    struct Student s1;
    s1.id = 101;
    strcpy(s1.name, "Alice");
    s1.gpa = 3.8;

    // All data is stored and accessible simultaneously
    printf("ID: %d, Name: %s, GPA: %.1f\n", s1.id, s1.name, s1.gpa);
    printf("%d",s1.id);
    
    return 0;
}