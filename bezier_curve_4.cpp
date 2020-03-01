#include<bits\stdc++.h>
#include<graphics.h>
using namespace std;

int getpt(int n1,int n2,float p){
    return n1+(n2-n1)*p;
}

int main()
{
    int xa,xb,ya,yb,x1,x2,x3,y1,y2,y3,x,y,xc,yc,x4,y4,a,b,c,d;
    cout<<"Enter the control points: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    circle(x1,y1,5);
    circle(x2,y2,5);
    circle(x3,y3,5);
    circle(x4,y4,5);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);

    for(float i=0;i<1;i=i+0.0001){
        xa=getpt(x1,x2,i);
        xb=getpt(x2,x3,i);
        xc=getpt(x3,x4,i);
        ya=getpt(y1,y2,i);
        yb=getpt(y2,y3,i);
        yc=getpt(y3,y4,i);

        a=getpt(xa,xb,i);
        b=getpt(xb,xc,i);
        c=getpt(ya,yb,i);
        d=getpt(yb,yc,i);




        x=getpt(a,b,i);
        y=getpt(c,d,i);

        putpixel(x,y,YELLOW);
    }
    getch();
    closegraph();

    return 0;
}


