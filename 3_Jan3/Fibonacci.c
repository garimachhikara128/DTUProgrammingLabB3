#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int a = 0 ;
    int b = 1 ;

    int count = 0 ;
    while(count <= n+1)
    {
        printf("%d\t" , a) ;

        int sum =  a + b ;
        // a , b updation
        a = b ;
        b = sum ;

        count = count + 1 ;
    }

    return 0 ; 
}