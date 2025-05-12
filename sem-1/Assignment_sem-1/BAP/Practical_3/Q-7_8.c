#include <stdio.h>

int main() 
{

    // Q-7. Write a C program that checks if a given character is an uppercase letter, lowercase
    //     letter, digit, or a special character using an if-else statement.
                                    //    *** nice one ***


    // char ch;s

    // printf("Enter the character\n");
    // scanf("%c",&ch);
    
    // if(ch >= 97  && ch <= 122)
    // {
    //     printf("character is lowercase");
    // }

    // else if(ch >= 65 && ch <= 90)
    // {
    //     printf("character is upercase");
    // }

    // else if((ch >= 32 && ch <= 42)  || (ch >= 58 && ch <= 64) || (ch >=91 && ch<= 96) || (ch >= 123 && ch <= 126) )
    // {
    //     printf("character is special character");
    // }

    // else {
    //     printf("character is digit");
    // }
    
    // return 0;


                                        //  or



    char a;
    printf("Enter a char: ");
    scanf("%c",&a);

    if(a >= 'a' && a <= 'z')
    {
        printf("char is lower case");
    }
    else if(a >= 'A' && a <= 'Z')
    {
        printf("char is upper case");
    }
    else if(a >= '0' && a <= '9')
    {
        printf("char is number");
    }
    else{
        printf("char is special");
     }
}