// If the sum of each individual digit factorial of a number is same as the number is called strong number
// 145 is a Strong Number.
#include <stdio.h>
main(){
    int number;
    int remainder;
    int quotient;
    int result=0;

    printf("Please Enter a Number: \n");
    scanf("%d",&number);
    quotient=number;
    while(quotient>0){
        remainder=quotient%10;
        quotient=quotient/10;
        int factorial=1;
        for(int i=2; i<=remainder; i++){
            factorial*=i;
        }
        result+=factorial;
    }
   if(number==result){
       printf("%d is a Strong number \n",number);
    }else{
         printf("%d is not a Strong number \n",number);
    }
    printf("\n Note: \n");
    printf("If the sum of each individual digits factorial of a number is same as the number is called strong number \n");
}
