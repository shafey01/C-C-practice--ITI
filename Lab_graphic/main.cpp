#include <iostream>
#include <graphics.h>
using namespace std;

class Point{

    int x;
    int y;

public:

    Point()
    {
        x=y=0;
    }
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

    void set_x(int _x)
    {
        x = _x;
    }

    void set_y(int _y)
    {
        y = _y;
    }


};

class Rect
{
    Point UL, LR;

public:
    Rect(int x, int y, int _x, int _y)
    {
        UL.set_x(x);
        UL.set_y(y);

        LR.set_x(_x);
        LR.set_y(_y);
    }

    void Draw()
    {
        setcolor(RED);
        rectangle(UL.get_x(), UL.get_y(), LR.get_x(), LR.get_y());
    }

};

class Circl
{
    Point P;
    int r;

public:
    Circl(int _x, int _y,int _r)
    {
        P.set_x(_x);
        P.set_y(_y);
        r = _r;
    }

    void Draw()
    {
        circle(P.get_x(), P.get_y(), r);
    }
};

class Lin
{
    Point P1, P2;

public:

    Lin(int x, int y, int _x, int _y)
    {
        P1.set_x(x);
        P1.set_y(y);
        P2.set_x(_x);
        P2.set_y(_y);
    }


    void Draw()
    {


        line(P1.get_x(), P1.get_y(), P2.get_x(), P2.get_y());
    }

};

class Picture
{
    Rect* rec;
    int num_rec;
    Circl* cir;
    int num_cir;
    Lin* lin;
    int num_line;

public:

    Picture()
    {
        rec = NULL;
        cir = NULL;
        lin = NULL;
    }

    Picture(Rect* _r, Circl* _c, Lin* _l,int r, int c, int l)
    {
        rec = _r;
        num_rec = r;
        cir = _c;
        num_cir = c;
        lin = _l;
        num_line = l;
    }

   void Draw()
    {
        for(int i=0; i<num_rec; i++)
        {
            rec[i].Draw();
        }
        for(int i=0; i<num_cir; i++)
        {
            cir[i].Draw();
        }
        for(int i=0; i<num_line; i++)
        {
            lin[i].Draw();
        }
    }

};



int main()
{

initwindow(400,400);


    Rect R(10,10, 80,80);
    R.Draw();

    Circl C(130, 140, 70);
    C.Draw();

    Lin L(180, 200, 399, 399);
    L.Draw();






//    Rect arrrec[2] = { Rect (10,10, 80,80), Rect(15,15, 90,90)};
//    Circl arrcir[2] = { Circl(10,15, 7), Circl(15,19, 7)};
//    Lin arrlin[2] = {Lin(10,20,40,50), Lin(10,20,40,50)};
//
//    Picture p(arrrec, arrcir, arrlin, 4, 5,1 );
//
//    p.Draw();




   // setfillstyle(SOLID_FILL, BLUE);

   // floodfill(10,10,50);

    getch();
    closegraph();

    return 0;
}
