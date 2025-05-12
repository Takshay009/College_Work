#include <stdio.h>

// pattern 12

// * * * * * * *
//   * * * * *
//     * * *
//       *

int main()
{
    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = n; k > i + 1; k--)
        {
            printf("*");
        }

        for (int k = n; k > i; k--)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}