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

    // sorting logic
    for(int count = 1 ; count <= n-1 ; count++)
    {
        int val = arr[count] ;

        int j = count - 1 ;

        while(j >= 0 && arr[j] > val)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }

        arr[j+1] = val ;
       
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }

   
    
    return 0 ;
}