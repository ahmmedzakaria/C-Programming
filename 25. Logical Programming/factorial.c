#include <stdio.h>
#include <conio.h>
main(){
    printf("Please Enter a Number....");
    int num;
    scanf("%d",&num);
    int res=1;
    printf("%d \n" , num);
    for(int i=2; i<=num; i++){
        res*=i;
    }
    printf("%d \n" , res);
}
