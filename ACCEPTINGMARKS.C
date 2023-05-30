//Write a program accept the marks of 5 subjects and declare total and average.

// Including header files
#include<conio.h>
#include<stdio.h>

// main function starts
void main()
{
  // Variable Declaration
  int Maths, Marathi, English, Hindi, Sanskrit,Total;
  float Average;
  
  //Clearing the oputput screen
  clrscr();
  
  printf("\n Marks of 5 subjects");                                         // Printing the statement
  scanf("%d %d %d %d %d",&Maths, &Marathi, &English, &Hindi, &Sanskrit);    // Fetching the values
  
  //Calculating the Total and Average Values
  Total = Maths+Marathi+English+Hindi+Sanskrit;
  Average = (float)Total/50;
  
  //Printing the fetched values
  printf("\n TOTAL = %d",Total);
  printf("\n AVERAGE = %f",Average);
  
  // Waiting till the user presses any key to exit the output screen
  getch();
}
