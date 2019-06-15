#include <stdio.h>
main(){
    // if a number is equal to the sum of all factors of the number and except the number is called perfect number
    // 6 is a perfect number.
    int number;
    printf("Please Enter a Number: \n");
    scanf("%d",&number);
    int result=0;
    for (int i=1; i<number; i++){
        if(number%i==0){
            result+=i;
        }
    }

    if(number==result){
       printf("%d is a perfect number: \n",number);
    }else{
         printf("%d is not a perfect number: \n",number);
    }
}
