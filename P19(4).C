#include<stdio.h>
#include<conio.h>
void main()
{
	int n=7,p,r,c,x,y,p2;
	clrscr();
	p=(n/2)+1;

	for(r=1;r<=p;r++)
	{
		for(c=1;c<=(p-r);c++)
		{
			printf(" ");
		}
		x=65;
		for(c=p-r+1;c<=p;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+r-1;
		for(c=1;c<=r-1;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}

	p2=n/2;
	for(r=1;r<=p2;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf(" ");
		}
		x=65;
		for(c=r+1;c<=p;c++)
		{
			printf("%c",x);
			x++;
		}
		y=64+p2-r;
		for(c=1;c<=p2-r;c++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}
	getch();
}






