/*
Programmer : Tanisha Kothadia
Aim : Convert celsius to fahrenheit
Date : 23-07-25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter temperature in celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Temperature in fahrenheit is %f",f);
	getch();
}