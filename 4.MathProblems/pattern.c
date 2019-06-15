#include<stdio.h>
main(){
    for(int row=0; row<=5; row++){
        for(int col=0; col<=5; col++){
            printf("* ");
        }
        printf("\n");
    }
printf("\n\n");
    //

    for(int row=0; row<=5; row++){
        for(int col=0; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }
}
