#include<iostream.h>
#include<conio.h>
void border()
{
	gotoxy(1,1);
	for(int i=0;i<=79;i++) // Top Border
	{
		textcolor(3);
		cprintf("_");
	}
	int x=1,y=24;
	for(i=0;i<=79;i++) // Bottom Border
	{
		gotoxy(x,y);
		textcolor(3);
		cprintf("_");
		x=x+1;
	}
	x=1;
	y=2;
	for(i=0;i<=22;i++) // Left Border
	{
		gotoxy(x,y);
		textcolor(3);
		cprintf("|");
		y=y+1;
	}
	x=80;
	y=2;
	for(i=0;i<=22;i++) // Right Border
	{
		gotoxy(x,y);
		textcolor(3);
		cprintf("|");
		y=y+1;
	}
}
