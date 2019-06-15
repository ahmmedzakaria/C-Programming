 // if a number is equal to the sum of all digits cube of a number is same as the number is called Armstrong number.
 // 153 is a Armstrong number.
#include <stdio.h>

// If reverse of a number is same as the number is called palindrome number
main(){
    int number;
    int remainder;
    int quotient;
    int result=0;
    printf("Please Enter a Number: \n");
    scanf("%d",&number);
    quotient=number;
    for(int i=0; quotient>0; i++){
       remainder=quotient%10;
        quotient=quotient/10;
        result+=remainder*remainder*remainder;
    }

    if(number==result){
       printf("%d is a Armstrong number: \n",number);
    }else{
         printf("%d is not a Armstrong number: \n",number);
    }
}
