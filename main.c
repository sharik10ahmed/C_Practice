#include <stdio.h>
#include <string.h>

int glo = 45;

void newPrint(char * char1)
{
    printf("The value is %s\n\n\n\n", char1);
}

int sum(int a, int b)
{
    return a+b;
}

float average(float a, float b)
{
    return (a+b)/4;
}


struct Info{
    char name[50];
    char Class[50];
    int Serial_Number;
    char School_Name[50];
} Info;


void printStruct(struct Info bk)
{
    printf("Name:-  %s\n", bk.name);
    printf("Class:-  %s\n", bk.Class);
    printf("Roll No:-  %d\n", bk.Serial_Number);
    printf("School Name:-  %s\n", bk.School_Name);
}
int main(){


    struct Info bk1, bk2;
    strcpy(bk1.name, "Sharik Ahmed");
    strcpy(bk1.Class, "9 F");
    bk1.Serial_Number = 49;
    strcpy(bk1.School_Name, "Sant Atulanand Residential Academy");
    printStruct(bk1);
    printf("Contact No:- 7571936102\n");

    return 0;

    
}