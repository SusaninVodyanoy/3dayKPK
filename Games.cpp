#include "TXLib.h"
#include "3day.h"

void MoveBAll(double x  = 100, double y  = 100, double vx = 5, double vy = 7,
              double ax =   0, double ay =   1, double dt = 1, double r  = 50);

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
    if (x+r > 800 && vx > 0) { vx = -vx;  }
    if (x-r <   0 && vx < 0) { vx = -vx;  }
    if (y+r > 600 && vy > 0) { vy = -vy;  }
    if (y-r <   0 && vy < 0) { vy = -vy;  }

    if (txGetAsyncKeyState (VK_LEFT))  vx--;
    if (txGetAsyncKeyState (VK_RIGHT)) vx++;
    if (txGetAsyncKeyState (VK_UP))    vy++;
    if (txGetAsyncKeyState (VK_DOWN))  vy--;
    if (txGetAsyncKeyState (VK_SPACE)) vy,vx=0; ;
    txSleep (100);
    }
}
