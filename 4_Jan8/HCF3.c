#include<stdio.h>

int main()
{
    int divident , divisor ;

    printf("Enter two nos ?") ;
    scanf("%d%d", &divident, &divisor) ;

    // while(1)
    // {
    //     int rem = divident % divisor ;

    //     if(rem == 0)
    //         break ;

    //     // update
    //     divident = divisor ;
    //     divisor = rem ;
    // }

    while(divident % divisor != 0)
    {
        int rem = divident % divisor ;

        // update
        divident = divisor ;
        divisor = rem ;
    }

    printf("HCF is %d" , divisor) ;

    return 0 ;
}