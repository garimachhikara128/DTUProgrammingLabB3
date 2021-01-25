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

    // sum
    int sum = 0 ; 
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum = sum + arr[i] ;
    }

    printf("Sum of array is %d", sum) ;

    return 0 ;
}