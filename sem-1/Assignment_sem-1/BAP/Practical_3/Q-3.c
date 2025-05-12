#include<stdio.h>
int main(){

// Q - 3. Write a C program that checks if a given number is a multiple of 10 using an if-else
//        statement.


    int num ;

    printf("Enter the number\n");
    scanf("%d",&num);

    if(num % 10 == 0){
        printf("Entered nummber was multiple of 10");
    }

    else{
        printf("Entered nummber was not multiple of 10");
    }
    
}