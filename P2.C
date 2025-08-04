/*
Programmer : Tanisha Kothadia
Aim : Area and perimeter of rectangular park
Date : 02-08-25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,a,p;
	clrscr();
	l=70;
	b=90;
	p=2*(l+b);
	a=l*b;
	printf("Perimeter of the park is %d",p);
	printf("\nArea of the park is %d",a);
	getch();
}