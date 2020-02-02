// Program to draw a line using line() command
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	/* gm is Graphics mode which is a computer display mode that generates image using pixels. */
	/* DETECT is a macro defined in "graphics.h" header file */

	initgraph(&gd, &gm, "");
	/* initgraph initializes the graphics system by loading a graphics driver from disk */


    line(20,100,500,100);
    /* The header file graphics.h contains line() function which plots a line at location (x1, y1, x2, y2). */


    getch();

	closegraph();
	/* closegraph function closes the graphics mode and deallocates all memory allocated by graphics system . */

	return 0;

}
