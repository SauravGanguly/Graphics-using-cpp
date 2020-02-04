// Program to draw a circle using bresenham's circle algorithm.
#include<graphics.h>
void pixel(int xc,int yc,int x,int y);
int main()
{
	int gd = DETECT, gm;
	/* gm is Graphics mode which is a computer display mode that generates image using pixels. */
	/* DETECT is a macro defined in "graphics.h" header file */

	initgraph(&gd, &gm, "");
	/* initgraph initializes the graphics system by loading a graphics driver from disk */

    int x,y,p;

	/* Enter center of circle */
	int xc = 320,yc = 240;

	/* Enter radius of circle */
	int r = 50;

	x=0;
	y=r;
	p=3-2*r;
	pixel(xc,yc,x,y);

	while(x<y)
	{
		if(p<0)
		{
			x++;
			p=p+4*x+6;
		}
		else
		{
			x++;
			y--;
			p=p+4*(x-y)+10;
		}
		pixel(xc,yc,x,y);
	}

	getch();
	closegraph();
	return 0;
}

void pixel(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
}
