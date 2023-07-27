#include <graphics.h>
#include <iostream>

void drawline(int x0, int y0, int x1, int y1)
{
    int dx = x1 - x0;
    int dy = y1 - y0;

    int d = dy - (dx/2);
    int x = x0, y = y0;

    putpixel(x, y, 7);  // Plot the first point

    // Iterate through value of x
    while (x < x1)
    {
        x++;

        // E or East is chosen
        if (d < 0)
            d = d + dy;

        // NE or North East is chosen
        else
        {
            d += (dy - dx);
            y++;
        }

        // Plot intermediate points
        putpixel(x, y, 7);
    }
}

int main()
{
	
    int gd=DETECT,gm;
    int x1 = 45, y1 = 45, x2 = 130, y2 = 130;

    initgraph(&gd, &gm, (char *)"");


    drawline(x1, y1, x2, y2);

	getch();
    closegraph();

    return 0;
}

