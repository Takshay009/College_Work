#include <stdio.h>
// pattern 8

//     1
//    121
//   12321
//  1234321
int main()
{
    int n;
    printf("Enter the number you want numberline :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        for (int m = i - 1; m >= 1; m--)
        {
            printf("%d", m);
        }

        printf("\n");
    }
    return 0;
}