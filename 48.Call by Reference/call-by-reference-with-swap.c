#include <stdio.h>

main(){
    int a=10, b=20;
    printf("Before Swap a: %d, b: %d \n", a,b);
    swap(&a, &b);
    printf("After Swap function main a: %d, b: %d \n", a,b);
}
void swap(int* x, int* y){
 int temp=*y;
 *y=*x;
 *x=temp;
 printf("After Swap from swap function a: %d, b: %d \n", *x,*y);
}
