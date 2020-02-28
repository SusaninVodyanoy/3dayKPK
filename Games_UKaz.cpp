#include "TXLib.h"
#include "3day.h"

void MoveBAll    (double x  = 100, double y  = 100,
                  double x1 = 300, double y1 = 100,
                  double x2 = 400, double y2 = 100,
                  double x3 = 500, double y3 = 100,
                  double vx =   1, double vy =   1,
                  double vx1=  10, double vy1=   7,
                  double vx2 =  7, double vy2 = 10,
                  double vx3=   1, double vy3=   7,
                  double ax =   0, double ay =   0, double dt = 1,
                  double r  = 10, double  r1=10,
                  double r2 = 10, double  r3=10);

void PressKey_V  (double* vx, double* vy);

void DrawBAll    (double x, double y, double r,COLORREF color);

void PhysicsBall (double* x, double* y, double* vx, double* vy,
                  double ax, double ay, double dt, double r);
double Distane   (double x1, double y1, double x2, double y2);
//-----------------------------------------------------------------------------


int main()
{
    txCreateWindow (800, 600);
    txBegin;
    MoveBAll       ();


}


//-----------------------------------------------------------------------------

void MoveBAll(double   x, double   y,
              double  x1, double  y1,
              double  x2, double  y2,
              double  x3, double  y3,
              double  vx, double  vy,
              double vx1, double vy1,
              double vx2, double vy2,
              double vx3, double vy3,
              double ax, double ay, double dt,
              double  r, double r1,
              double r2, double r3)
{
bool flag = false;
while (!txGetAsyncKeyState (VK_ESCAPE) && !flag)
    {
    txSetFillColor (TX_WHITE);
    txClear();
    DrawBAll    (x, y, r, TX_RED);
    PressKey_V  (&vx, &vy);
    PhysicsBall ( &x,  &y,  &vx,  &vy, 0,  0, dt,   r);
    DrawBAll    ( x1,  y1,   r1, TX_CYAN);
    PhysicsBall (&x1, &y1, &vx1, &vy1, ax, ay, dt, r1);
    DrawBAll    ( x2,  y2,   r2, TX_CYAN);
    PhysicsBall (&x2, &y2, &vx2, &vy2, ax, ay, dt, r2);
    DrawBAll    ( x3,  y3,   r3, TX_CYAN);
    PhysicsBall (&x3, &y3, &vx3, &vy3, ax, ay, dt, r3);
    if (Distane( x, y, x1, y1) <= r1+r)
    {
        txTextOut (100, 50, "YOU'RE DEAD");
        txTextOut (100, 100, "do it slacker1");
        // txTextOut (100, position, "by slacker developer©");
        flag = true;
    };
    if (Distane( x, y, x2, y2) <= r2+r)
    {
        txTextOut (100, 50, "YOU'RE DEAD");
        txTextOut (100, 100, "do it slacker2");
        // txTextOut (100, position, "by slacker developer©");
        flag = true;
    };
    if (Distane( x, y, x3, y3) <= r3+r)
    {
        txTextOut (100, 50, "YOU'RE DEAD");
        txTextOut (100, 100, "do it slacker3");
        // txTextOut (100, position, "by slacker developer©");
        flag = true;
    };
    txSleep     (20);

    }

}

void DrawBAll (double x, double y, double r, COLORREF color)
{

    //txSetColor     (RGB (random(255), random(255), random(255)));
    //txSetFillColor (RGB (random(255), random(255), random(255)));
    txSetColor     (color);
    txSetFillColor (color);
    txCircle       (x, y, r);
}

void PhysicsBall (double* x, double* y, double* vx, double* vy,
                  double ax, double ay, double dt, double r)
{


    *vx += ax*dt;
    *vy += ay*dt;
    *x  += *vx*dt;
    *y  += *vy*dt;

    if (*x+r > 800 && *vx > 0) { *vx = -*vx;  }
    if (*x-r <   0 && *vx < 0) { *vx = -*vx;  }
    if (*y+r > 600 && *vy > 0) { *vy = -*vy;  }
    if (*y-r <   0 && *vy < 0) { *vy = -*vy;  }
    //return vx, vy, x, y;
}

void PressKey_V(double* vx, double* vy)
{
    if (txGetAsyncKeyState (VK_LEFT))  *vx = *vx - 1;
    if (txGetAsyncKeyState (VK_RIGHT)) *vx = *vx + 1;
    if (txGetAsyncKeyState (VK_UP))    *vy = *vy + 1;
    if (txGetAsyncKeyState (VK_DOWN))  *vy = *vy - 1;
    if (txGetAsyncKeyState (VK_SPACE)) *vy,  *vx = 0; ;
}
double Distane (double  x1, double  y1, double  x2, double  y2)
{
    double dist = sqrt ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return dist;
}
