#include<stdio.h>

void PD(int) ;

int main()
{
    printf("hello\n") ;
    PD(7) ;
    printf("bye\n") ;
    return 0;
}

// BP : n -> 1 
void PD(int n)
{
    // Base Case
    if(n == 0)
        return ;

    // Work
    printf("%d\n", n) ;

    // SP : n-1 -> 1
    PD(n-1) ;
}