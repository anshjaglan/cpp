#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize the graphics system
    initgraph(&gd, &gm, (char*)"");

    // Set the drawing color to GREEN
    setcolor(GREEN);

    // Draw a square using rectangle(left, top, right, bottom)
    // Width and height are both 200 pixels (300-100)
    rectangle(100, 100, 300, 300);

    // Label the shape
    outtextxy(150, 80, (char*)"Green Square");

    getch();       // Wait for key press
    closegraph();  // Close graphics mode
    return 0;
}

