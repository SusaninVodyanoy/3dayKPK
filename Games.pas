#include "TXLib.h"
#include "3day.h"

void goodbyeScene();

//-----------------------------------------------------------------------------


int main()
    {
    txCreateWindow (800, 600);
    x = 0;
    y = 0;
    vx = 10;
    While not(txGetAsyncKeyState (vk_eccape);
    {

    if ((x>=800) and (x<=0))
        {
         vx=-vx;
        }
    x = x + vx;
    y = y + vx;
    txCircle (x , y);
    txSleep (50);
    }

    }


//-----------------------------------------------------------------------------

void goodbyeScene()
    {

    }
