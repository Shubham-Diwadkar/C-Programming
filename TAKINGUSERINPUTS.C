//Write a program to take input from a user.

// Including header files
#include<conio.h>
#include<stdio.h>

// main function starts
void main()
{
  // Variable Declaration
  int rollno;
  float per;
  char grade;
  char name[20];
  
  //Clearing the oputput screen
  clrscr();
  
  printf("\n Enter Values for Roll No., Name, Grade and Percentage of a Student");                  // Printing the statement
  scanf("%d %s %c %f",&rollno,&name,&grade,&per);                                                   // Fetching the values
  printf("\n Name = %s \n Roll No. = %d \n Percentage = %f \n Grade = %c",name,rollno,per,grade);   //Printing the fetched values
  
  // Waiting till the user presses any key to exit the output screen
  getch();
}
