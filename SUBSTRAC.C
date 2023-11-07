//write a program to perform all arithmetic operations such as +,-,/,*and%
//substract
#include<stdio.h>
#include<conio.h>
void main()
{
	int substract,a,b;
	clrscr();
	printf("Enter the value of a \t");
	scanf("%d",&a);
	printf("Enter the value of b \t");
	scanf("%d",&b);
	substract=a-b;
	printf("your result is = %d",substract);
	getch();
}
