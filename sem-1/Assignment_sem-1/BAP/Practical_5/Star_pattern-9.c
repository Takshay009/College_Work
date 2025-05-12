#include <stdio.h>

// pattern 9

// ABCDCBA
// ABC CBA
// AB   BA
// A     A
int main()
{
    // int n;
    // printf("Enter the number you want starpattern lines :");
    // scanf("%d", &n);
    for (int i = 0; i <= 5; i++)
    {
        for (char charactor = 'a'; charactor <= 'e' - i; charactor++)
        {
            if (i == 0 && charactor == 'e')
            {
                break;
            }
            else
                printf("%c", charactor);
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (char charactor = 'e' - i; charactor >= 'a'; charactor--)
        {
            printf("%c", charactor);
        }

        printf("\n");
    }
    return 0;
}