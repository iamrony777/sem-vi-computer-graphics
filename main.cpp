// C++ program for DDA line generation

#include <graphics.h>
using namespace std;

// To round off pixels
int round(float n)
{
	if (n - (int)n < 0.5)
		return (int)n;
	return (int)(n + 1);
}

// Generate Line
void DDALine(int x0, int y0, int x1, int y1)
{

	// Calculate dx and dy
	int dx = x1 - x0;
	int dy = y1 - y0;

	int step;

	// If dx > dy we will take step as dx
	// else we will take step as dy to draw the complete
	// line
	if (abs(dx) > abs(dy))
		step = abs(dx);
	else
		step = abs(dy);

	// Calculate x-increment and y-increment for each step
	float x_incr = (float)dx / step;
	float y_incr = (float)dy / step;

	// Take the initial points as x and y
	float x = x0;
	float y = y0;

	for (int i = 0; i < step; i++) {

		putpixel(round(x), round(y), WHITE);
		x += x_incr;
		y += y_incr;
		 delay(10);
	}
}

// Driver code
int main()
{

	int x0 = 510, y0 = 510, x1 = 10, y1 = 10;
	int i,gd=DETECT,gm;
	 
	initgraph(&gd,&gm, (char *)"");

	// Function call
	DDALine(x0, y0, x1, y1);

//	delay(1*60*1000); // 1 min delay 
	return 0;
}
