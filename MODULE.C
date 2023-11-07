//write a program to perform all arithmetic operations such as +,-,/,*and%
//module
#include<stdio.h>
#include<conio.h>
void main()
{
	int module,a,b;
	clrscr();
	printf("Enter the value of a \t");
	scanf("%d",&a);
	printf("Enter the value of b \t");
	scanf("%d",&b);
	module=a%b;
	printf("your module is = %d",module);
	getch();
}
