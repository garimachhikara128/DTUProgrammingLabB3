#include<stdio.h>

int main()
{
    int n1 , n2 ;

    printf("Enter two nos ?") ;
    scanf("%d%d" , &n1, &n2) ;

    int min = n1 > n2  ? n2 : n1 ;

    int div = min ;
    while(div >= 1)
    {
        if(n1 % div == 0 && n2 % div == 0)
            break ;

        div = div - 1 ;
    }

    printf("HCF of %d and %d is %d" , n1, n2 , div);
    
    return 0 ; 
}