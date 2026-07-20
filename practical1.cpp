
#include<graphics.h>
#include<iostream>
using namespace std;

int xmin=150,ymin=150,xmax=450,ymax=350;

int code(int x,int y)
{
    int c=0;
    if(x<xmin) c|=1;
    else if(x>xmax) c|=2;
    if(y<ymin) c|=8;
    else if(y>ymax) c|=4;
    return c;
}

void clip(int x1,int y1,int x2,int y2)
{
    int c1=code(x1,y1),c2=code(x2,y2),c,x,y;

    while(1)
    {
        if(!(c1|c2)) break;
        else if(c1&c2) return; 
        else
        {
            c=c1?c1:c2;

            if(c&8){ x=x1+(x2-x1)*(ymin-y1)/(y2-y1); y=ymin; }
            else if(c&4){ x=x1+(x2-x1)*(ymax-y1)/(y2-y1); y=ymax; }
            else if(c&2){ y=y1+(y2-y1)*(xmax-x1)/(x2-x1); x=xmax; }
            else { y=y1+(y2-y1)*(xmin-x1)/(x2-x1); x=xmin; }

            if(c==c1){ x1=x; y1=y; c1=code(x1,y1); }
            else { x2=x; y2=y; c2=code(x2,y2); }
        }
    }

    setcolor(GREEN);
    line(x1,y1,x2,y2);
}

int main()
{
    int gd=DETECT,gm,n,x1,y1,x2,y2;
    initgraph(&gd,&gm,(char*)"");

    rectangle(xmin,ymin,xmax,ymax);

    cout<<"Enter no. of lines: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter x1 y1 x2 y2: ";
        cin>>x1>>y1>>x2>>y2;

        setcolor(RED);
        line(x1,y1,x2,y2);

        clip(x1,y1,x2,y2);
    }

    getch();
    closegraph();
}
