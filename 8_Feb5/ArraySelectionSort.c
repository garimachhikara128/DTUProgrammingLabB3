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
    for(int count = 0 ; count <= n-2 ; count++)
    {
       int minidx = count ;

        for(int j = count + 1 ; j <= n-1 ; j++)
        {
            if(arr[j] < arr[minidx])
                minidx = j ;
        }

        // swap
        int temp = arr[count] ;
        arr[count] = arr[minidx] ;
        arr[minidx] = temp ;
       
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t" , arr[i]) ;
    }

   
    
    return 0 ;
}