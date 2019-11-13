
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm, color;

    initgraph(&gd, &gm, "");
    for(int i=0;i<2500;i++){
        putpixel(rand()%400,rand()%400,rand()%15);
        delay(80);
    }

    getch();

    closegraph();

    return 0;
}

