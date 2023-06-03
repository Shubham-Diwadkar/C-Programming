//Write a program to find grater number between two numbers using Conditional Operators.

#include<conio.h>                                                       // Including the conio.h header.
#include<stdio.h>                                                       // Including the standard input/output header.

// Declaring the main function.
int main()
{
    int a, b, max;                                                      // Declaring three integer variables.
    
    // Displaying prompt for user input.
    printf("\n Enter two integers:-");
    printf("\n First Integer: ");
    scanf("%d", &a);                                                    // Reading first integer entered by the user.
    printf("\n Second Integer: ");
    scanf("%d", &b);                                                    // Reading second integer entered by the user.
    max = (a>b)?printf("\n Grater = %d", a):printf("Grater = %d", b);   // Using conditional operator to determine and print the greater value.
    return 0;                                                           // Exiting the program with status code 0.
}
