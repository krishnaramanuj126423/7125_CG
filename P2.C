#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT,gm;
	// initialize graphics mode
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	// Draw a line
	putpixel(300,250,RED);
	setcolor(GREEN);
	line(5000,250,0,250);
	setcolor(BLUE);
	line(300,0,300,900);
	setcolor(RED);
	line(0,0,300,250);
	line(300,250,5000,5000);
	setcolor(RED);
	line(0,500,300,250);
	setcolor(RED);
	line(300,250,550,0);


	getch();

	closegraph();

	return 0;
}
