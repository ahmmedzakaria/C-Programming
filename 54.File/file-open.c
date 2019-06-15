#include <stdio.h>
#include <stdlib.h>

main(){
    FILE* fp;
    int ch;
    fopen("D:/Zakaria/c-programming/54.File/test.txt","r"); //r for read mode
    if (fp == NULL)
        printf("file is not present\n");
    else{
        printf("file open in read mode\n");

        while((ch=fgetc(fp))!=EOF){
            printf("%d",ch);
        }
    }

}
