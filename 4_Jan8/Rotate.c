#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    printf("Enter Rotations ?") ;
    scanf("%d", &rot) ;

    // original no. : no of digits ?
    int nod = 0 ;
    int temp = n ;

    while(temp != 0)
    {
        nod = nod + 1 ;
        temp = temp / 10 ;
    }

    // 10 ^ nod-1
    int mult = 1 ;

    int count = 1 ;
    while(count <= nod-1)
    {
        mult = mult * 10 ;
        count = count + 1 ;
    }

    int r = 1 ;
    while(r <= rot)
    {
        int ld = n % 10 ;
        int rest = n / 10 ;

        int ans = ld * mult + rest ;

        n = ans ;  
        r = r +1 ;
    }

    printf("%d\n", n) ; 


    return 0 ; 
}