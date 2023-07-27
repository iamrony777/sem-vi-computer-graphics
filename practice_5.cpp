#include <graphics.h>


void boundaryFill4(int x, int y, int fill_color, int boundary_color) {
	if (getpixel(x,y) != fill_color && (getpixel(x,y) != boundary_color)) {
		putpixel(x, y, fill_color);
		boundaryFill4(x+1, y, fill_color, boundary_color);
		boundaryFill4(x, y+1, fill_color, boundary_color);
		boundaryFill4(x-1, y, fill_color, boundary_color);
		boundaryFill4(x, y-1, fill_color, boundary_color);
	}
}

int main(){
	int top,left,bottom,right;

	int gd= DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
//	int x=100,y=100;
	top=left=50;
	bottom=right=300;
	
	rectangle(left,top,right,bottom);
	boundaryFill4(100,100,YELLOW,WHITE);
	
	delay(10000);
	getch();
	closegraph();
	return 0;

}
