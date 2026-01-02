#include <stdio.h>
int swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return 0;
}
int main()
{
    int a1,b1;
    printf("Enter first number:");
    scanf("%d",&a1);
    printf("Enter second number:");
    scanf("%d",&b1);
    printf("Numbers before Swaping:\t%d\t%d",a1,b1);
    swap(&a1,&b1);
    printf("\nNumbers after swaping:\t%d \t %d",a1,b1);
    return 0;
}
//Code to swap two numbers without using a temporary variable in C