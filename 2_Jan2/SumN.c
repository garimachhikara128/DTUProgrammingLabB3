#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int sum = 0 ;

    int count = 1 ; // initialization

    while(count <= n) // condition
    {
        if(count % 2 != 0)
            sum = sum + count ;

        count = count + 1 ; // re-initialization
    }

    printf("Sum of first %d natural nos is %d", n , sum) ;

    return 0 ; 
}