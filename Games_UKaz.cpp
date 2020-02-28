#include "TXLib.h"
#include "3day.h"

void MoveBAll    (double x  = 100, double y  = 100,
                  double x1 = 150, double y1 = 150,
                  double vx =   1, double vy =   1,
                  double vx1=   1, double vy1=   7,
                  double ax =   0, double ay =   0, double dt = 1, double r  = 10, double  r1=20);

void PressKey_V  (double* vx, double* vy);

void DrawBAll    (double x, double y, double r);

void PhysicsBall (double* x, double* y, double* vx, double* vy,
                  double ax, double ay, double dt, double r);
//-----------------------------------------------------------------------------


int main()
{
    txCreateWindow (800, 600);
    txBegin;
    MoveBAll       ();


}


//-----------------------------------------------------------------------------

void MoveBAll(double  x, double  y, double  vx, double  vy,
              double x1, double y1, double vx1, double vy1,
              double ax, double ay, double dt, double  r, double  r1)
{
while (!txGetAsyncKeyState (VK_ESCAPE))
    {
    txSetFillColor (TX_BLACK);
    txClear();
    DrawBAll    (x, y, r);
    PressKey_V  (&vx, &vy);
    PhysicsBall (&x, &y, &vx, &vy, ax, ay, dt, r);
    DrawBAll    (x1, y1, r1);
    PhysicsBall (&x1, &y1, &vx1, &vy1, ax, ay, dt, r1);
    txSleep     (20);
    }

}

void DrawBAll (double x, double y, double r)
{

    //txSetColor     (RGB (random(255), random(255), random(255)));
    //txSetFillColor (RGB (random(255), random(255), random(255)));
    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
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
