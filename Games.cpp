#include "TXLib.h"
#include "3day.h"

void MoveBAll(double x  = 100, double y  = 100, double vx = 5, double vy = 7,
              double ax =   0, double ay =   1, double dt = 1);
void PressKey_V(double vx, double vy);

void DrawBAll (double x  = 100, double y  = 100, double r  = 50);
//-----------------------------------------------------------------------------


int main()
{
    txCreateWindow (800, 600);
    MoveBAll       ();

}


//-----------------------------------------------------------------------------

void MoveBAll(double  x, double  y, double vx, double vy,
              double ax, double ay, double dt, double  r)
{
while (!txGetAsyncKeyState (VK_ESCAPE))
    {
    txSetColor     (RGB (random(255), random(255), random(255)));
    txSetFillColor (RGB (random(255), random(255), random(255)));

    txCircle (x, y, r);
    vx += ax*dt;
    x += vx*dt;
    y += vy*dt;
    PressKey_V (&vx, &vy)

    txSleep (100);
    }
}

void DrawBAll (double, do

void PressKey_V(ouble vx, double vy)
{
    if (txGetAsyncKeyState (VK_LEFT))  vx--;
    if (txGetAsyncKeyState (VK_RIGHT)) vx++;
    if (txGetAsyncKeyState (VK_UP))    vy++;
    if (txGetAsyncKeyState (VK_DOWN))  vy--;
    if (txGetAsyncKeyState (VK_SPACE)) vy,vx=0; ;
}
