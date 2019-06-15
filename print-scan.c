#include <stdio.h>

int main(){
int age;
char name[25];
printf("Enter your name : \n");
scanf("%s",name);
//getchar();

printf("Enter your age :\n");
scanf("%d",&age);

printf("Hello %s . Your age is %d",name,age);

return 0;
}
