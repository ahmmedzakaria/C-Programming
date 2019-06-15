#include <stdio.h>
struct Employee{
    int     employeeId;
    char    employeeName[20];
    float   employeeSalary;

};
void main(){
    struct Employee e ={1001, "Zakaria Ahmmed", 30000};
    printf("Employee details \n");
    printf("Employee Id: %d\n",e.employeeId);
    printf("Employee Name: %s\n",e.employeeName);
    printf("Employee Salary: %f\n",e.employeeSalary);
}
