#include<stdio.h>

int main()
{
    int table,number,sum;

    printf("Enter the number of table you want :");
    scanf("%d",&number);

    for(table = 1; table <= 10; table++)
    {
        // printf("%d x %d = %d\n",number,table,number*table);
        sum = sum + (number *table);
    }

    printf("%d\n",sum);
    return 0;
}