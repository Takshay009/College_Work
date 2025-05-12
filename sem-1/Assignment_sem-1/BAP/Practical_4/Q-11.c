// 10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number you to check whether numer is prime or not :");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("Number is not prime");
    }

    else
    {
        int i = 2;
        {
            while (i <= (num / 2))
            {

                if (num % i == 0)
                {
                    printf("Number is not prime");
                    break;
                }
                else if (i == num / 2)
                {
                    printf("Number is prime");
                    break;
                }
                else
                {
                    continue;
                }
                i++;
            }
        }
    }
    return 0;
}