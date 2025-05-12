// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("Enter the number you want factorial of :");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
        // printf("%d\n",factorial);
    }

    printf("Factorial of %d is %d", num, factorial);
    return 0;
}