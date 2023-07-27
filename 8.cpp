#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // Original triangle coordinates
    int x1 = 100, y1 = 200;
    int x2 = 200, y2 = 200;
    int x3 = 150, y3 = 100;

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Calculate reflection coordinates
    int x1r = x1, y1r = -y1;
    int x2r = x2, y2r = -y2;
    int x3r = x3, y3r = -y3;

    // Draw reflected triangle
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}

