#include <stdio.h>
void incr1( int *a)
{
    *a=*a+1;
    
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    incr1(&a);
    printf("The value of a after incr1 is: %d", a);
}
