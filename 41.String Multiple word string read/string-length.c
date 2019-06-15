#include <stdio.h>
#include <string.h>
main(){
char name[20];
unsigned int leng;
printf("Enter your Name\n");
gets(name);
leng=strlen(name);
printf("Your Name is %s. It contains total %d character", name, leng);


}
