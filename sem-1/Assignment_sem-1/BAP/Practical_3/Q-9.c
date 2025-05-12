#include <stdio.h>

int main() 
{

//    Q - 9. Write a C program that determines the grade of a student based on their marks using
//           the following criteria:

// ○ Marks >= 90: Grade A
// ○ Marks >= 80 and < 90: Grade B
// ○ Marks >= 70 and < 80: Grade C
// ○ Marks >= 60 and < 70: Grade D
// ○ Marks < 60: Grade F

    int marks;

    printf("Enter your marks :");
    scanf("%d",&marks);

    if( marks >= 90)
    {
        printf("Grade A");
    }

    else if(marks >= 80 && marks < 90)
    {
        printf("Grade B");
    }

    else if(marks >=70 && marks < 80)
    {
        printf("Grade C");
    }

    else if(marks >= 60 && marks < 70)
    {
        printf("Grade D");
    }

    else{
        printf("Grade E");
    }

}