#include <graphics.h>

int main() {
	int x1=10, y1=10, x2=100, y2=100;
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char *)"" );
	
	
	int dx = abs(x2-x1);
	int dy = abs(y2-y1);
	
	
	int slope_error = (2 * dy) - dx;
	
	for (int x = x1, y = y1; x <= x2; x++) {
		delay(0.005*1000);
		putpixel(x,y,WHITE);
		
		while (slope_error>=0) {
			y++;
			slope_error -= 2 * dx;
		}
		slope_error += 2 * dy;
	}
	
	getch();
	closegraph();
	return 0;
	
	
}
