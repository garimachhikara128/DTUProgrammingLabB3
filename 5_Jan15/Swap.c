#include<stdio.h>

int main()
{
    int a = 10 ;
    int b = 25 ;

    printf("a: %d b : %d\n", a , b) ;

    // swapping using extra variable
    // int temp = a ; // temp = 10 
    // a = b ; // a = 25
    // b = temp ; // b = 10 

    // printf("a: %d b : %d\n", a , b) ;

    // swapping without using extra variable
    a = a + b ; // a = 35
    b = a - b ; // b = 10
    a = a - b ; // a = 25

    printf("a: %d b : %d\n", a , b) ;

    return 0 ;
}