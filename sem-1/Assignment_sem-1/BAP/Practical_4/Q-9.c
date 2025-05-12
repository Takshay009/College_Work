// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("Enter the number you want factorial of :");
    scanf("%d", &num);
int i = num;
    while ( i >= 1)
    {
        factorial = factorial * i;
        // printf("%d\n",factorial);
         i--;
    }

    printf("Factorial of %d is %d", num, factorial);
    return 0;
}