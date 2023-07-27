// C++ program for DDA line generation

#include <graphics.h>
#include <cmath>
#include <iostream>


// Generate Line
void DDALine(int x1, int y1, int x2, int y2)
{

	// Calculate dx and dy
	int dx = x2 - x1;
	int dy = y2 - y1;

	// If dx > dy we will take step as dx
	// else we will take step as dy to draw the complete
	// line
    int step = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Calculate x-increment and y-increment for each step
	float xIncrement = (float)dx / step;
	float yIncrement = (float)dy / step;

	// Take the initial points as x and y
	float x = x1, y = y1;

	for (int i = 0; i < step; i++) {

		putpixel(round(x), round(y), WHITE);
		x += xIncrement;
		y += yIncrement;
		delay(0.005*1000);
	}
}

// Driver code
int main()
{

	int x1 = 300, y1 = 300, x2 = 200, y2 = 200;
	int gd=DETECT,gm;
	 
	initgraph(&gd,&gm, (char *)"");

	// Function call
	DDALine(x1, y1, x2, y2);
	
	getch();
	return 0;
}

