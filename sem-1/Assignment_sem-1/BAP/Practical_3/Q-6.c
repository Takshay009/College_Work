#include <stdio.h>

int main() 
{

//     // Q -6 : Write a C program that checks whether a given integer is even or odd using an if-else
//               statement.

    int a;

    printf("Enter the number....");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        
        printf("This number is odd\n");
    }
    else
    {
        printf("This number is even\n");
    }

    return 0;                
}