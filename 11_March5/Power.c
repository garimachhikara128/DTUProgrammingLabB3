#include<stdio.h>

int power(int, int) ;

int main()
{
    printf("%d", power(3, 7)) ;

    return 0 ;
}

// BP : b^e
int power(int b, int e)
{
    // Base Case
    if(e == 0)
        return 1 ;

    // SP : b^e-1
    int bpem1 = power(b, e-1) ;

    // Work
    int bpe  = bpem1 * b ;

    return bpe ;

}