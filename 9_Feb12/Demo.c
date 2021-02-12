#include<stdio.h>

int main()
{
    char ch, ch1 ; 
    int i ;

    printf("enter i ?\n") ;
    scanf("%d", &i) ;
    printf("value of i is %d\n", i) ;

    fflush(stdin) ;

    printf("enter ch ?\n") ;
    scanf("%c", &ch) ;
    printf("value of ch is %c\n", ch) ;

    fflush(stdin) ;
    
    printf("enter ch1 ?\n") ;
    scanf("%c", &ch1) ;
    printf("value of ch1 is %c\n", ch1) ;

    return 0; 
}
