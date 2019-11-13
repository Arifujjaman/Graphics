
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(2);
    line(150, 150, 450, 150);

    setcolor(1);
    line(150, 30, 450, 80);

    setcolor(3);
    line(300, 50, 40, 170);

    setcolor(4);
    line(190, 110, 330, 430);
    getch();
    closegraph();
}
