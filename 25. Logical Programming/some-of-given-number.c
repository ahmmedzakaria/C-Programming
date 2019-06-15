#include <stdio.h>
main(){
    int number;
    int remainder;
    int quotient;
    int result=0;
    printf("Please Enter a Number: \n");
    scanf("%d",&number);
    while(number>0){
       remainder=number%10;
        quotient=number/10;
        number=quotient;
        result+=remainder;
    }
    printf("Some of digits is: %d", result);


}
