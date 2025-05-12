#include <stdio.h>

// 2. Write a program to print a multiplication table of 10 in reversed order.

int main()
{
    int table, number, sum;

    printf("Enter the number of table you want :");
    scanf("%d", &number);

    for (table = 10; table >= 1; table--)
    {
        printf("%d x %d = %d\n", number, table, number * table);
    }

    return 0;
}