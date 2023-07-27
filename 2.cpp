#include <graphics.h>
#include <iostream>

int main(void)
{
	int x1 = 20, y1 = 20, x2 = 120, y2 = 120;
	int gd=DETECT,gm;
	 
	initgraph(&gd,&gm, (char *)"");

 
   int dx=x2-x1; // difference
   int dy=y2-y1;
 
   int slope_error=(2*dy)-dx; // ( 2 * (y2 - y1) ) - (x2 - x1)
   for (int x = x1, y = y1; x <= x2; x++)
   {
	    putpixel(x,y,15);
	    while(slope_error>=0)
	    {
	        y++;
	        slope_error -= 2 * dx;
	    }
	    x++;
	    slope_error += 2 * dy;
	}
 
   getch();
   closegraph();
   return 0;
}
