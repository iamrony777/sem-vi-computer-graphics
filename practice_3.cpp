#include <graphics.h>
#include <stdio.h>

void drawMidPointLine(int x1, int y1, int x2, int y2) {
	int dx = x2 - x1;
	int dy = y2 - y1;
	
	int initialDistance = (2 * dy) - dx;
	int dInitialDisatance = 2 * (dy - dx);
	printf("Distance between the points: %d\n", initialDistance);

	int x = x1; // stating point
	int y = y1;
	 	
	
	while ( x != x2 ) {
			
		if ( initialDistance < 0 ) {
			
			x += 1;
			initialDistance += 2 * dy;
			
		} else if ( initialDistance >= 0 ) {
			
			x += 1;
			y += 1;
			initialDistance += dInitialDisatance;
		}
		
    	printf("x1: %d, y1: %d, x2: %d, y2: %d\n", x, y, x2, y2);
    	delay(0.005*1000);
    	putpixel(x,y, WHITE);
	}
	
	getch();
	
}



int main () {
	

	int x1 = 10, x2 = 10, y1 = 100, y2 = 100;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	
	//fuction call
	drawMidPointLine(x1, x2, y1, y2);
	
	
	
	closegraph();
	return 0;
	
	
	
}
