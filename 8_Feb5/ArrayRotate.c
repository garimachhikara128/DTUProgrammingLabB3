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

    int rot ;

    printf("Enter the no. of rotations ?") ;
    scanf("%d", &rot) ;

    // rotations
    for(int r = 1 ; r <= rot ; r++)
    {
        // single rotation
        int temp = arr[n-1] ;

        for(int i = n-1 ; i >= 1 ; i--)
            arr[i] = arr[i-1] ;

        arr[0] = temp ;
       
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }

   
    
    return 0 ;
}