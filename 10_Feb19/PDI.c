#include<stdio.h>

void PDI(int) ;

int main()
{
    printf("hello\n") ;
    PDI(4) ;
    printf("bye\n") ;
    return 0;
}

void PDI(int n)
{
    if(n == 0)
        return ;

    printf("hii %d\n", n) ;

    PDI(--n) ;

    printf("bye %d\n", n) ;
}