#include<stdio.h>

int main()
{
    int n ;

    // no of elements 
    printf("No. of elements in array ?") ;
    scanf("%d", &n) ;

    // array create
    int arr[n] ;

    // array input
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] : " , i) ;
        scanf("%d" , &arr[i]) ;
    }

    // display
    for(int i = n-1 ; i >= 0 ; i--)
    {
        printf("%d\t", arr[i]) ;
    }

    return 0 ;
}