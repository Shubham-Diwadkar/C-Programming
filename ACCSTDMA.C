//Write a program acccept the marks of 5 subjects and declare total and average.
#include<conio.h>
#include<stdio.h>
void main()
{
int Maths, Marathi, English, Hindi, Sanskrit,Total;
float Average;
clrscr();
printf("\n Marks of 5 subjects");
scanf("%d %d %d %d %d",&Maths, &Marathi, &English, &Hindi, &Sanskrit);
Total = Maths+Marathi+English+Hindi+Sanskrit;
Average = (float)Total/50;
printf("\n TOTAL = %d",Total);
printf("\n AVERAGE = %f",Average);
getch();
}