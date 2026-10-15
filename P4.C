#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT,gm;
	// initialize graphics mode
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	// Draw a line
	putpixel(300,250,RED);
	setcolor(RED);
	line(550,250,50,250);
	setcolor(RED);
	line(300,0,300,600);

	setcolor(GREEN);
	circle(300,250,250);

	getch();

	closegraph();

	return 0;
}
