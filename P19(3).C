/*
Programmer : Tanisha Kothadia
Aim : Pattern
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,n=5,s;
	clrscr();
	for(r=n;r>=1;r--)
	{
		for(s=0;s<n-r;s++)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		for(c=2;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=2;r<=n;r++)
	{
		for(s=0;s<n-r;s++)
			printf(" ");
		for(c=r;c>=1;c--)
			printf("%d",c);
		for(c=2;c<=r;c++)
			printf("%d",c);
		printf("\n");
	}
	getch();
}

















