#include <stdio.h>
// Star Pattern 4

// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

int main()
{
    int n;
    printf("Enter the number you want starpattern lines :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            if (i == 0 && k == n - 1)
            {
                break;
            }
            else
                printf("*");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = n; k > i; k--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}