#include <stdio.h>

// pattern 6

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
int main()
{
    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = n; j > i + 1; j--)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
