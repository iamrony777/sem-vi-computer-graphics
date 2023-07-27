#include <graphics.h>
#include <stdio.h>
#include <math.h>


void print8(int x, int y) {
	putpixel(200+x, 200+y, YELLOW);
	putpixel(200-x, 200+y, YELLOW);
	putpixel(200+x, 200-y, YELLOW);
	putpixel(200-x, 200-y, YELLOW);
	putpixel(200+y, 200+x, YELLOW);
	putpixel(200-y, 200+x, YELLOW);
	putpixel(200+y, 200-x, YELLOW);
	putpixel(200-y, 200-x, YELLOW);

}


void midPointCircleDraw(int r) {
	int x = 0, y = r;
	int P = 1 - r;
	
	while ( x  <= y ) {
		print8(x,y);
		delay(0.005 * 1000);
		
		if (P>0) {
			P += (2 * (x - y)) + 1;
			y--;

		} else {
			P += (2 * x) + 1;
		}
		x++;
	}
}



int main() {
	int r = 50;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");
	
	midPointCircleDraw(r);
	
	getch();
	closegraph();
	return 0;	
	
}
