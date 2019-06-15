#include <stdio.h>
#include <stdlib.h>
main(){
    int n, *arr;
    printf("Enter size of Array: \n");
    scanf("%d", &n);

    arr= (int*) calloc(n,sizeof(int));

    if(arr==NULL)
        printf("No memory allocated \n");
    else
    {
        printf("Array Elements are: \n");
        for(int i=0; i<n; i++){
            printf("%d\n",arr[i]);
        }
        // Print Array Element Second process
        printf("Second process -> Array Elements are: \n");
        for(int i=0; i<n; i++){
            printf("%d\n",*(arr+i));
        }
    }

}
