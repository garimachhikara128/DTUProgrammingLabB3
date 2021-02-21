#include<stdio.h>

void addition(int , int) ;

int main()
{
    printf("hello\n") ;
    addition(30 , 40) ;

    int x = 130 ;
    int y = 20 ;
    addition(x , y) ;
    
    printf("bye\n") ;
    
    return 0 ;
}

void addition(int a , int b)
{
    int sum = a + b ;
    printf("%d\n", sum) ;
}
