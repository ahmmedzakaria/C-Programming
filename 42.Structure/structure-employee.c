#include <stdio.h>
struct Employee{
    int     employeeId;
    char    employeeName[20];
    float   employeeSalary;

};

main(){
    struct Employee e;
    printf("Size of Employee %d\n", sizeof(e));
    printf("Size of Employee %d\n", sizeof(struct Employee));
}

