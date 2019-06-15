#include <stdio.h>
struct Employee{
    int     employeeId;
    char    employeeName[20];
    float   employeeSalary;

};

main(){
    typedef struct Employee Emp;
    Emp e;
    e.employeeId=110;
    e.employeeSalary=35000;
    printf("%d\n",e.employeeId);
    printf("%s\n",e.employeeName);
    printf("%f\n",e.employeeSalary);
}
