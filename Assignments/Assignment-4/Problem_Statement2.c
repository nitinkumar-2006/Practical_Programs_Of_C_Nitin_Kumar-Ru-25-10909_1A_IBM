#include <stdio.h>
int max( int *a , int *b)
{ 
    if( *a > *b)
    return *a; 
    else
    return *b;
}
int main(){
    int a1,b1,*max1;
    printf("Enter first number:");
    scanf("%d",&a1);
    printf("Enter second number:");
    scanf("%d",&b1);
    *max1=max(&a1,&b1);
    printf("Greater number is:\t%d",*max1);
    return 0;
}
//Code to find the maximum of two numbers using pointers in C