#include<conio.h>
#include<stdio.h>
void main()
{
int rollno;
float per;
char grade;
char name[20];
clrscr();
printf("\n Enter Values for Roll No., Name, Grade and Percentage of a Student");
scanf("%d %s %c %f",&rollno,&name,&grade,&per);
printf("\n Name = %s \n Roll No. = %d \n Percentage = %f \n Grade = %c",name,rollno,per,grade);
getch();
}