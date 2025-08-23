/*
Programmer : Tanisha Kothadia
Aim : Litrate men and women gap
Date : 03-08-25
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	long int lm,lw,p,w,m,ilm,ilw,l,tl,gap;
	float prew,lit,litw,litm;
	clrscr();
	p=1441981744;
	prew=48.8;
	w=prew*p/100;
	m=p-w;
	lit=85.95;
	l=p*lit/100;
	litm=80.95;
	lm=m*litm/100;
	litw=62.84;
	lw=w*litw/100;
	ilm=m-lm;
	ilw=w-lw;
	tl=lm+lw;
	gap=lm-lw;
	printf("Total number of literate people are: %ld",tl);
	printf("\nTotal number of literate men are: %ld",lm);
	printf("\nTotal number of litrate women are: %ld",lw);
	printf("\nLiteracy gap between men and women is %ld\nMore illiterate women are found as compared to men",gap);
	getch();
}
