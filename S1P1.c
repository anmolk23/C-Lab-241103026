#include <stdio.h>
int main ()
{
    int a = 5;
    int *ptr=&a;
    printf("Address of the variable is:%d\n", ptr);
    printf("Value of the variable:%d\n", ptr);

    return 0;
}
