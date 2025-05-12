#include <stdio.h>

// Pattern 3

// * * * * *
//   * * * *
//     * * *
//       * *
//         *
int main()
{
    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf(" ");
        }

        for (int k = i; k < n; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}