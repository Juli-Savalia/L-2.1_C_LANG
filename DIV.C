//write a program to perform all arithmetic operations such as +,-,/,*and%
//division
#include<stdio.h>
#include<conio.h>
void main()
{
	float div,a,b;
	clrscr();
	printf("Enter the value of a \t");
	scanf("%f",&a);
	printf("Enter the value of b \t");
	scanf("%f",&b);
	div=a/b;
	printf("your sum is = %f",div);
	getch();
}
