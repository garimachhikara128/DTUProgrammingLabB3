#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int fact = 0 ;
    int div = 2 ;

    while(div * div <= n)
    {
        if(n % div == 0) // if this condn comes out to be true : then you can say no. is not prime
        {
            fact = fact + 1 ;
            break ;
        }

        div = div + 1 ;
    }

    if(fact == 0)
        printf("%d is prime", n) ;
    else
        printf("%d is not prime", n) ;

    return 0 ;
}