#include <stdio.h>
main(){
    int a;
    int m;
    int addptr;

    int (*ptrFunction)(int,int);
    a=add(20,30);
    printf("Add: %d\n",a);
    m=multiply(2,3,4);
    printf("Multiply: %d\n",m);

    ptrFunction=&add;
    addptr= ptrFunction(20,50);
    printf("Add-ptrf: %d\n",addptr);
}

int add(int x, int y){
    return x+y;
}
int multiply(int x, int y, int z){
    return x*y*z;
}
