#include<conio.h>
#include<stdio.h>
int main()
{
    int a, b, max;
    printf("\n Enter two integers");
    scanf("%d %d", &a, &b);
    max = (a>b)?printf("\n Grater = %d", a):printf("Grater = %d", b);
    return 0;
}