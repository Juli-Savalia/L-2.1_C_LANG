//write a program to perform all arithmetic operations such as +,-,/,*and%

#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,a,b;
	clrscr();
	printf("Enter the value of a \t");
	scanf("%d",&a);
	printf("Enter the value of b \t");
	scanf("%d",&b);
	sum=a+b;
	printf("your sum is = %d",sum);
	getch();
}
