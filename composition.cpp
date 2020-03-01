#include<bits\stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(200,200,200,400);
    line(200,200,600,200);
    line(600,200,600,400);
    line(200,400,600,400);
    circle(400,300,75);

    getch();
    closegraph();
    return 0;
}
