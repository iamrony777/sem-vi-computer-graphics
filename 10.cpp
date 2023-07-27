#include <graphics.h>
#include <cmath>

// Function to rotate a point by a certain angle around the origin
void rotate(float &x, float &y, float theta) {
    float tempX = x, tempY = y;
    x = tempX*cos(theta) - tempY*sin(theta);
    y = tempX*sin(theta) + tempY*cos(theta);
}

// Function to translate a point by a certain vector
void translate(float &x, float &y, float tx, float ty) {
    x += tx;
    y += ty;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // Original triangle coordinates
    float x1 = 100, y1 = 200;
    float x2 = 200, y2 = 200;
    float x3 = 150, y3 = 100;

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Translate points
    float tx = 50, ty = -50; // translation vector
    translate(x1, y1, tx, ty);
    translate(x2, y2, tx, ty);
    translate(x3, y3, tx, ty);

    // Rotate points
    float theta = M_PI / 6; // 30 degrees in radians
    rotate(x1, y1, theta);
    rotate(x2, y2, theta);
    rotate(x3, y3, theta);

    // Draw translated and rotated triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
    return 0;
}

