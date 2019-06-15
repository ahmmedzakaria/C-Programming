#include <stdio.h>
#include <stdlib.h>
struct Emp{
    int     empId;
    char    empName[20];
    float   empSalary;

};

main(){
    struct Emp* ptr;
    ptr=(struct Emp*)malloc(sizeof(struct Enp*));
    if(ptr == NULL){
        printf("Out of memory error \n");
    }else{
        printf("enter Employee Details Id, Name, Salary\n");
        scanf("%d %s %f", &ptr->empId, ptr->empName, &ptr->empSalary);
    }

    printf("Employee Id: %d\n", ptr->empId);
    printf("Employee Name: %s\n", ptr->empName);
    printf("Employee Id: %f\n", ptr->empSalary);
}
