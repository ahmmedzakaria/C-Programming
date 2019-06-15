#include <stdio.h>
struct Employee{
    int     employeeId;
    char    employeeName[20];
    float   employeeSalary;

};

main(){
    char* cp;
    int* ip;
    struct Employee* ep;
    printf("Size of char* is %d\n", sizeof(cp));
    printf("Size of int* %d\n", sizeof(ip));
    printf("Size of ep* %d\n", sizeof(ep));
}






