#include <stdio.h>

int main() 
{
    
//   Q - 2,10 : Write a C program that checks whether a given number is positive, negative, or zero
//              using an if-else statement.

    int num;

    printf("Enter the number you want to check positive or negative\n");
    scanf("%d",&num);

    if(num == 0){
        printf("Entered number is 0");
    }

    else if(num > 0){
        printf("Entered number is positive");
    }

    else{
        printf("Entered number is negative");
    }
    return 0;
}
