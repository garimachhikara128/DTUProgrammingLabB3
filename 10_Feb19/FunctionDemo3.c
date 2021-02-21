#include<stdio.h>

int addition(int , int) ;

int main()
{
    printf("hello\n") ;
    int res = addition(30 , 40) ;  
    printf("%d\n", res) ;  
    printf("bye\n") ;
    
    return 0 ;
}

int addition(int a , int b)
{
    int sum = a + b ;  
    return sum ;
}
