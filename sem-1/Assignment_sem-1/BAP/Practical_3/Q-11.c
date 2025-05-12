#include <stdio.h>

int main() 
{

// Q - 11. Write a C program that checks the temperature and gives a suggestion based on the
// following criteria:

// ○ Temperature > 30: Print "It's hot, stay hydrated.
// ○ Temperature between 15 and 30: Print "The weather is pleasant.
// ○ Temperature < 15: Print "It's cold, wear warm clothes.

    int temperature ;

    printf("Enter the temperature of your rome :");
    scanf("%d",&temperature);

    if(temperature > 30)
    {
        printf("It's hot, stay hydrated");
    }
    
    else if(temperature >= 15 && temperature <= 30)
    {
        printf("The weather is plesant");
    }
    
    else if(temperature < 15)
    {
        printf("it's cold, wear warm clothes");
    }

}