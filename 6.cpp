#include <graphics.h>
#include <stdio.h>

void flood(int x, int y, int new_col, int old_col)
{
    // Checking current pixel is old_color or not
    if (getpixel(x, y) == old_col)
    {
        // Putting new pixel with new color
        putpixel(x, y, new_col);
        
        // Recursive call for four directions
        flood(x + 1, y, new_col, old_col);
        flood(x - 1, y, new_col, old_col);
        flood(x, y + 1, new_col, old_col);
        flood(x, y - 1, new_col, old_col);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // Draw the rectangle
    rectangle(200, 200, 300, 300);

    // Fill the rectangle with color
    flood(201, 201, 12, 0);

    getch();

    closegraph();

    return 0;
}

