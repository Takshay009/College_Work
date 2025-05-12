  // 1 ...
#include <stdio.h>

// Q - 1 : Write a C program that checks if a person is eligible to vote or not. Assume the
//         minimum voting age is 18 years.

int main(){
    int age ;

    printf("Enter your age\n");
    scanf("%d",&age);

    if( age <= 18)
    {
        printf("Your are eligible for giving vote");
    }
    else{
        printf("Your are not eligible for giving vote");
    }
    return 0;
}