#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   for(int i=0;i<50;i++){
      circle(rand()%300, rand()%200,rand()%150);
      delay(80);
      cleardevice();
   }


   getch();
   closegraph();
   return 0;
}

