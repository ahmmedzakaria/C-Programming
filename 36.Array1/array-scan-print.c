#include <stdio.h>
//int arr[5];
main(){
    int arr[5];
    for (int i=0; i<5; i++){
        printf("Please Enter Array Element %d \n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<=5; i++){
        printf("Array Element %d is %d \n",i+1,arr[i]);

    }
}
