
#include<graphics.h>
#include<iostream>
using namespace std;

int xmin=150,ymin=150,xmax=450,ymax=350;

struct P
{
    float x,y;
}p[20],t[20];

int in(P a,int edge)
{
    if(edge==0) return a.x>=xmin;
    if(edge==1) return a.x<=xmax;
    if(edge==2) return a.y>=ymin;
    return a.y<=ymax;
}

P inter(P s,P e,int edge)
{
    P p;
    float x,y;

    if(edge<2) // left-right
    {
        x=(edge==0)?xmin:xmax;
        y=s.y+(e.y-s.y)*(x-s.x)/(e.x-s.x);
    }
    else // top-bottom
    {
        y=(edge==2)?ymin:ymax;
        x=s.x+(e.x-s.x)*(y-s.y)/(e.y-s.y);
    }

    p.x=x;
    p.y=y;
    return p;
}

void clip(int &n,int edge)
{
    int k=0;

    for(int i=0;i<n;i++)
    {
        P s=p[i];
        P e=p[(i+1)%n];

        int a=in(s,edge);
        int b=in(e,edge);

        if(a&&b)
            t[k++]=e;

        else if(a&&!b)
            t[k++]=inter(s,e,edge);

        else if(!a&&b)
        {
            t[k++]=inter(s,e,edge);
            t[k++]=e;
        }
    }

    for(int i=0;i<k;i++)
        p[i]=t[i];

    n=k;
}

int main()
{
    int gd=DETECT,gm,n;
    initgraph(&gd,&gm,(char*)"");

    rectangle(xmin,ymin,xmax,ymax);

    cout<<"Enter number of vertices: ";
    cin>>n;

    cout<<"Enter x y:\n";

    for(int i=0;i<n;i++)
        cin>>p[i].x>>p[i].y;

    setcolor(RED);

    for(int i=0;i<n;i++)
        line(p[i].x,p[i].y,p[(i+1)%n].x,p[(i+1)%n].y);

    for(int i=0;i<4;i++)
        clip(n,i);

    setcolor(GREEN);

    for(int i=0;i<n;i++)
        line(p[i].x,p[i].y,p[(i+1)%n].x,p[(i+1)%n].y);

    getch();
    closegraph();
}
