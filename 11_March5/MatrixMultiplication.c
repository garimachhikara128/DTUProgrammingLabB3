#include<stdio.h>

int main()
{
    int r1 = 2 ;
    int c1 = 3 ;

    // create
    int one[r1][c1] ;

    // input for one array
    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c1 ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    // create
    int r2 = 3 ;
    int c2 = 4 ;

    int two[r2][c2] ;

    // input for two array
    for(int r = 0 ; r < r2 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    // multiply
    int res[r1][c2] ;

    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            res[r][c] = one[r][c] + two[r][c] ;
            printf("%d\t", res[r][c]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}