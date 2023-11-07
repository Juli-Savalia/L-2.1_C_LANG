//write a program to perform all arithmetic operations such as +,-,/,*and%
//multiplication
#include<stdio.h>
#include<conio.h>
void main()
{
	int multiply,a,b;
	clrscr();
	printf("Enter the value of a \t");
	scanf("%d",&a);
	printf("Enter the value of b \t");
	scanf("%d",&b);
	multiply=a*b;
	printf("your result is = %d",multiply);
	getch();
}
