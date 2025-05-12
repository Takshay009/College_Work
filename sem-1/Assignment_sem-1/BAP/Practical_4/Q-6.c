#include<stdio.h>

int main()
{
    int num ,sum = 0;
     
     printf("Enter the natural num you want sum of :");
     scanf("%d",&num);
int i = 1;
     while(i <= num)
     {
        sum += i;
        i++;
     }
     
     printf("%d",sum);
    return 0;
}