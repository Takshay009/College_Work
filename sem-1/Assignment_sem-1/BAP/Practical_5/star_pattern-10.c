#include <stdio.h>

// Star Pattern 10
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
int main()
{

    // method 1 :

    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        for (int k = 1; k <= i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf(" ");
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf(" ");
        }

        for (int k = i; k < n; k++)
        {
            printf("*");
        }

        for (int k = i; k < n - 1; k++)
        {
            printf("*");
        }
        printf("\n");
        printf(" ");
    }

    return 0;
}