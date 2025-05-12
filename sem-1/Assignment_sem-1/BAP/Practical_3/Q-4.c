#include <stdio.h>

int main() 
{

//     // Q - 4 : Write a C program that finds the largest of three numbers using nested if-else
//                statements.

    int a,b,c ;

    printf("Enter three number\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a > b  && a > c)
    {
        printf("a is largest");
    }

    else if(b > a  && b > c)
    {
        printf("b is largest");
    }

    else{
        printf("c is largest");
    }
     
    return 0 ;
}