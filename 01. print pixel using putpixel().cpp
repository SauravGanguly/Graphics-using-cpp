// Program to print pixel using put pixel command
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	/* gm is Graphics mode which is a computer display mode that generates image using pixels. */
	/* DETECT is a macro defined in "graphics.h" header file */

	initgraph(&gd, &gm, "");
	/* initgraph initializes the graphics system by loading a graphics driver from disk */

    putpixel(50,25,WHITE);
    /* The header file graphics.h contains putpixel() function which plots a pixel at location (x, y) of specified color. */

    getch();

	closegraph();
	/* closegraph function closes the graphics mode and deallocates all memory allocated by graphics system . */

	return 0;

}
