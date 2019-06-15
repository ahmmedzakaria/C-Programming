#include <stdio.h>
main(){
    int i=105;
    int* ptr;
    ptr=&i;
    printf("1. Value of variable i: %d\n",i);
    printf("2. Address of variable i: %d\n",&i);
    printf("3. Value of variable ptr: %d. Means address of i\n",ptr);
    printf("4. Address of variable ptr: %d\n",&ptr);
    printf("5. Value of variable i: %d\n",*ptr);
    printf("6. Value of variable i: %d\n",*(&i));

    //It is batter to use %u for memory address in-street of %d.
    // because  memory address always unsigned integer.

}
