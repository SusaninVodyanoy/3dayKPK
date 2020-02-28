#include "TXLib.h"
#include "3day.h"

void MoveBAll    (double x  = 100, double y  = 100, double vx = 5, double vy = 7,
                  double ax =   0, double ay =   1, double dt = 1, double r  = 10);
void PressKey_V  (double* vx, double* vy);

void DrawBAll    (double x, double y, double r);

void PhysicsBall (double* x, double* y, double* vx, double* vy,
                  double ax, double ay, double dt, double r);
//-----------------------------------------------------------------------------


int main()
{
    txCreateWindow (800, 600);
    txBegin;
    MoveBAll       (100, 100, 5, 7, 0, 1, 1,20);


}


//-----------------------------------------------------------------------------

void MoveBAll(double  x, double  y, double vx, double vy,
              double ax, double ay, double dt, double  r)
{
while (!txGetAsyncKeyState (VK_ESCAPE))
    {
    DrawBAll    (x, y, r);
    PressKey_V  (&vx, &vy);
    PhysicsBall (&x, &y, &vx, &vy, ax, ay, dt, r);
    //DrawBAll    (x+25, y+25, 10);
    //PhysicsBall (&x, &y, &vx, &vy, ax, ay, dt, r);
    txSleep     (50);
    }

}

void DrawBAll (double x, double y, double r)
{
    txSetFillColor (TX_BLACK);
    txClear();

    //txSetColor     (RGB (random(255), random(255), random(255)));
    //txSetFillColor (RGB (random(255), random(255), random(255)));
    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle       (x, y, r);
}

void PhysicsBall (double* x, double* y, double* vx, double* vy,
                  double ax, double ay, double dt, double r)
{


    * vx += ax*dt;
    * vy += ay*dt;
    * x  += *vx*dt;
    * y  += *vy*dt;

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
