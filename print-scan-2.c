#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter an integer:  ");
    scanf("%d",&x);
    printf("You entered %d\n",x);

    getchar();  // <--- does it work as you expect?

    return 0;
}
