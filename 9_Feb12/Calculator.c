#include<stdio.h>

int main()
{
    char op ; 
    int n1 , n2 ;

    printf("Enter the operator ?\n") ;
    scanf("%c", &op) ;

    printf("Enter 2 nos ?\n") ;
    scanf("%d %d", &n1 , &n2) ;

    switch(op)
    {
        case '+' :
                    printf("%d + %d = %d\n", n1 , n2 , (n1+n2)) ;
                    break ;

        case '-' :
                    printf("%d - %d = %d\n", n1 , n2 , (n1-n2)) ;
                    break ;

        case '*' :
                    printf("%d * %d = %d\n", n1 , n2 , (n1*n2)) ;
                    break ;    

        case '/' :
                    printf("%d / %d = %d\n", n1 , n2 , (n1/n2)) ;
                    break ;

        default :
                    printf("Invalid Operation\n") ;
    }

    return 0 ;
}