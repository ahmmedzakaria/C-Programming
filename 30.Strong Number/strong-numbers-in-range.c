#include <stdio.h>
main(){
    int rangeStart=0;
    int rangeEnd=0;
    printf("Please Enter Range Start: \n");
    scanf("%d",&rangeStart);
    printf("Please Enter Range End: \n");
    scanf("%d",&rangeEnd);
    printf("Strong numbers between %d and %d are: \n",rangeStart,rangeEnd );
    for(int i=rangeStart; i<=rangeEnd; i++){
        if(checkStrongNumber(i)==1){
           printf("%d \n",i);
        }
    }
    printf("\n Note: \n");
    printf("If the sum of each individual digits factorial of a number is same as the number is called strong number \n");

}

int checkStrongNumber(int number){
    int remainder;
    int quotient;
    int result=0;
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
       return 1;
    }else{
        return 0;
    }
}
