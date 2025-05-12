#include <stdio.h>

// Patter 1

// *
// * *
// * * *
// * * * *
// * * * * *

int main()
{
    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}