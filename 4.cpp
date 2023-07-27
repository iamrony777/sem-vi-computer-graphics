#include <graphics.h>
#include <iostream>

void drawCircle(int x_center, int y_center, int r) 
{
    int x = r, y = 0;
  
    // Initial point on the axes after translation
    putpixel(x + x_center, y + y_center, 7);

    if (r > 0) 
    {
        putpixel(x + x_center, -y + y_center, 7);
        putpixel(y + x_center, x + y_center, 7);
        putpixel(-y + x_center, x + y_center, 7);
    }
  
    // Initialising the value of P
    int P = 1 - r;
    while (x > y) 
    {
        y++;
          
        // Mid-point is inside or on the perimeter
        if (P <= 0)
            P = P + 2*y + 1;
          
        // Mid-point is outside the perimeter
        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }
          
        // All the perimeter points have already been printed
        if (x < y)
            break;
          
        // Printing the generated point and its reflection
        // in the other octants after translation
        putpixel(x + x_center, y + y_center, 7);
        putpixel(-x + x_center, y + y_center, 7);
        putpixel(x + x_center, -y + y_center, 7);
        putpixel(-x + x_center, -y + y_center, 7);
          
        // If the generated point is on the line x = y then
        // the perimeter points have already been printed
        if (x != y) 
        {
            putpixel(y + x_center, x + y_center, 7);
            putpixel(-y + x_center, x + y_center, 7);
            putpixel(y + x_center, -x + y_center, 7);
            putpixel(-y + x_center, -x + y_center, 7);
        }
    }
}

int main()
{
	
    int gd=DETECT,gm;
    int x_center = 320 ; int y_center = 240; int r = 100;

    initgraph(&gd, &gm, (char *)"");


    drawCircle(x_center, y_center, r);

	getch();
    closegraph();

    return 0;
}

