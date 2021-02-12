#include<stdio.h>

void PD(int) ;

int main()
{
    printf("hii\n") ;
    PD(5) ;
    printf("bye") ;

    return 0 ;
}

// BP : n -> 1
void PD(int n)
{
    if(n == 0)
        return ;

    // work
    printf("%d\n", n) ;

    // SP : n-1 -> 1
    PD(n-1) ; 
}