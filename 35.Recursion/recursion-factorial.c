#include <stdio.h>
main(){
    int num;
    printf("Please Enter a Number for Factorial: \n ");
    scanf("%d",&num);

    int result=fac(num);
    printf("The factorial of %d is %d",num,result);
}
int fac(int num){
    int res;
    if(num==0)
        res=1;
    else
        res=num*fac(num-1);
    return res;
}
