#include <stdio.h>
void sum( int *a, int *b )
{
    int sum;
    sum = ((*a)+(*b));
    printf("Sum of a and b is %d\n", sum);
}
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b:");
    scanf("%d", &b);

    sum(&a,&b);
    return 0;              
}    
