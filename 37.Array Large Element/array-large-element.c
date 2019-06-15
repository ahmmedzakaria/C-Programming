#include <stdio.h>
main(){
    int arr[5]={3,5,2,23,1};
    int large=arr[0];

    for (int i=1; i<5; i++){
        if(arr[i]>large)
            large=arr[i];
    }
    printf("The large element of the array is %d",large);
}
