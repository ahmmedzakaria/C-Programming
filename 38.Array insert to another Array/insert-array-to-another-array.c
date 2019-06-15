#include <stdio.h>
maint(){
    int arr[50];
    int n;
    printf("Please Enter How Many Number You Want To Enter\n");
    scanf("%d",n);
    for(int i=0; i<n; i++){
        printf("Please Enter Number %d",i+1);
        scanf("%d",&arr[i]);
    }
}

shiftElement(int startPosition, int numberOfShift){
    for(int i=n; i>=startPosition; i--){
        arr[i+numberOfShift]=arr[i];
    }
}

