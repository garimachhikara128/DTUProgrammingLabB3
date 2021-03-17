#include<stdio.h>

int main()
{
    int rows = 3 ;
    int cols = 3 ;

    // create
    int one[rows][cols] ;

    // input for one array
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    // create
    int two[rows][cols] ;

    // input for two array
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    // addition
    int res[rows][cols] ;

    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            res[r][c] = one[r][c] + two[r][c] ;
            printf("%d\t", res[r][c]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}