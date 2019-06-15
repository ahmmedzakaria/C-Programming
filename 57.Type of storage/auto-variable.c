#include <stdio.h>

//auto int a; //Error Massage
main(){
    auto int a=10; //Method Scope
    {
        auto int a; // Block scope (Garbage value)
        printf("Block scope: %d\n",a); //Garbage value
    }
    printf("Method scope: %d\n",a); //10
}
