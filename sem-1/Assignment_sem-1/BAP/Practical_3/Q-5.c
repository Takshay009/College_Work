#include <stdio.h>

int main() 
{

//     // Q - 5 : Write a C program that checks if a given character is a vowel or a consonant using an
//                if-else statement.
  
    char value;
    printf("Enter the character you want to chacke vowel or consonent :");
    scanf("%c",&value);

    if (value == 'a' || value == 'e' ||value == 'i'||value == 'o'||value == 'u'||value == 'A'||value == 'E'||value == 'I'||value == 'O'  || value == 'U')
    {
        printf("Entered character was vowel");
    }
    else{
        printf("Entered character was consonent");

    }
    
    return 0;
}