#include <stdio.h>
main(){
    typedef int Array[5];
    Array x={2,444,67,34,9};
    printf("Array elements are \n");

    for(int i=0; i<5; i++){
        printf("%d\n",x[i]);
    }
}

