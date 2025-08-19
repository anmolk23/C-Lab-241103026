#include <stdio.h>
void SwapByValue (int a, int b){
    int temp1;
    temp1=a;
    a=b;
    b=temp1;
    printf("Value of a and b after swap using call by value is: %d and %d\n", a,b);

}
void swapByReference (int *ptr1, int *ptr2){
    int temp2;
    temp2= *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp2;
    printf("Value of a and b after swap using call by reference is: %d and %d\n", *ptr1, *ptr2);
}
int main()
{
    int a, b;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter 2nd number:");
    scanf("%d", &b);

    printf("Original value of a and b is %d and %d\n", a, b);
    
    SwapByValue(a,b);
    
    swapByReference(&a, &b);
    

    return 0;
}
