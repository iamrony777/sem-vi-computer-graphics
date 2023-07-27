#include <graphics.h>
#include <iostream>
#include <cmath>


void drawDDAline(int x1, int y1, int x2, int y2) {
	int dx = x2 - x1;
	int dy = y2 - y1;
	
	
	int step = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
	
	float xIncrement = (float)dx / step;
	float yIncrement = (float)dy / step;
	
	
	float x = x1, y = x2;
	
	for (int i = 0; i < step ; i++ ) {
		putpixel(x, y, WHITE);
		x += xIncrement;
		y += yIncrement;
	} 
	
}



int main() {
	int x1 = 300, y1 = 300, x2 = 200, y2 = 200;
	int gd = DETECT, gm;
	
	initgraph(&gd, &gm, (char*)"");
	
	// funciton call
	drawDDAline(x1, y1, x2, y2);
	
	getch();
	closegraph();
	return 0;
	
	
}
