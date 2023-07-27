#include <graphics.h>
#include <cmath>

// Function to rotate a point by a certain angle around the origin
void rotate(float &x, float &y, float theta) {
    float tempX = x, tempY = y;
    x = tempX*cos(theta) - tempY*sin(theta);
    y = tempX*sin(theta) + tempY*cos(theta);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // Original triangle coordinates
    float x1 = 150, y1 = 250;
    float x2 = 250, y2 = 250;
    float x3 = 200, y3 = 150;

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Rotate points
    float theta = M_PI / 6; // 30 degrees in radians
    rotate(x1, y1, theta);
    rotate(x2, y2, theta);
    rotate(x3, y3, theta);

    // Draw rotated triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
    return 0;
}

