#include <stdio.h>

void main() {
    char ch;
    printf("Enter a character : ");
    // Fixed typo: changed 'scnaf' to 'scanf'
    scanf("%c", &ch); 
    
    // Check if character is between 'a' AND 'z' OR 'A' AND 'Z'
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Given character %c is an alphabet\n", ch);
    }
    // Check if character is between '0' AND '9'
    else if(ch >= '0' && ch <= '9') {
        printf("Given character %c is a digit\n", ch);
    }
    // If it matches none of the above
    else {
        printf("Given character %c is neither an alphabet nor a digit\n", ch);
    }
}