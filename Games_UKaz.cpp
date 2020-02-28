#include "TXLib.h"
#include "3day.h"

struct Sczchzshkharrrr
{
double x, y;
double vx, vy;
double r;
};

void MoveBAll    (double ax = 0, double ay = 0, double dt = 1);

void PressKey_V  (Sczchzshkharrrr* s);
void PressKey    (Sczchzshkharrrr* s);

void DrawBAll    (const Sczchzshkharrrr* s, COLORREF color, char numb[2]);

void PhysicsBall (Sczchzshkharrrr* s, double ax, double ay, double dt);
double Distane   (double x1, double y1, double x2, double y2);



//-----------------------------------------------------------------------------


int main()
{
    txCreateWindow (800, 600);
    txBegin;
    MoveBAll       ();


}


//-----------------------------------------------------------------------------

void MoveBAll(double ax, double ay, double dt)
{
bool isTheEND = false;

        Sczchzshkharrrr s1 = {100, 200, 5, 7, 10};
        Sczchzshkharrrr s2 = {300, 200, 5, 7, 20};
        Sczchzshkharrrr s3 = {400, 200, 5, 7, 20};
        Sczchzshkharrrr s4 = {500, 200, 5, 7, 20};

while (!txGetAsyncKeyState (VK_ESCAPE) && !isTheEND)
    {

        txSetFillColor (TX_WHITE);
        txClear        ();

        DrawBAll    (&s1, TX_RED, "0");
        PressKey_V  (&s1);
        PhysicsBall (&s1, 0,  0, dt);

        DrawBAll    (&s2,TX_GREEN, "1");
        PressKey    (&s2);
        PhysicsBall (&s2, 0,  0, dt);

        if (Distane( s1.x, s1.y, s2.x, s2.y) < s1.r+s2.r-5)
            {
                txSetColor(TX_BLACK);
                txTextOut (100,  50, "YOU'RE DEAD");
                txTextOut (100, 100, "do it slacker1");
                double dist = Distane( s1.x, s1.y, s2.x, s2.y);
                printf    ("%f",dist);
                isTheEND = true;
            };

        DrawBAll    (&s3, TX_GREEN, "2");
        PhysicsBall (&s3, 0,  0, dt);

        if (Distane( s1.x, s1.y, s3.x, s3.y) < s1.r+s3.r-5)
            {
                txSetColor(TX_BLACK);
                txTextOut (100,  50, "YOU'RE DEAD");
                txTextOut (100, 100, "do it slacker2");
                double dist = Distane( s1.x, s1.y, s3.x, s3.y);
                printf    ("%f",dist);
                isTheEND = true;
            };

        DrawBAll    (&s4, TX_GREEN, "3");
        PhysicsBall (&s4, 0,  0, dt);

        if (Distane( s1.x, s1.y, s4.x, s4.y) < s1.r+s4.r-5)
            {
                txSetColor(TX_BLACK);
                txTextOut (100,  50, "YOU'RE DEAD");
                txTextOut (100, 100, "do it slacker1");
                double dist = Distane( s1.x, s1.y, s4.x, s4.y);
                printf    ("%f",dist);
                isTheEND = true;
            };
        txSleep     (20);

    }

}

void DrawBAll (const Sczchzshkharrrr* s, COLORREF color, char numb[2])
{

    //txSetColor     (RGB (random(255), random(255), random(255)));
    //txSetFillColor (RGB (random(255), random(255), random(255)));
    txSetColor     (color);
    txSetFillColor (color);
    txCircle       (s->x, s->y, s->r);
    txSetColor (TX_WHITE);
    txTextOut (s->x-1, s->y-1, numb);
}

void PhysicsBall (Sczchzshkharrrr* s, double ax, double ay, double dt)
{


    s->vx += ax*dt;
    s->vy += ay*dt;
    s->x  += s->vx*dt;
    s->y  += s->vy*dt;

    if (s->x+s->r > 800 && s->vx > 0) { s->vx = -s->vx;  }
    if (s->x-s->r <   0 && s->vx < 0) { s->vx = -s->vx;  }
    if (s->y+s->r > 600 && s->vy > 0) { s->vy = -s->vy;  }
    if (s->y-s->r <   0 && s->vy < 0) { s->vy = -s->vy;  }
    //return vx, vy, x, y;
}

void PressKey_V(Sczchzshkharrrr* s)
{
    if (txGetAsyncKeyState (VK_LEFT))  s->vx = s->vx - 1;
    if (txGetAsyncKeyState (VK_RIGHT)) s->vx = s->vx + 1;
    if (txGetAsyncKeyState (VK_UP))    s->vy = s->vy + 1;
    if (txGetAsyncKeyState (VK_DOWN))  s->vy = s->vy - 1;
    if (txGetAsyncKeyState (VK_SPACE)) s->vy = 0,  s->vx = 0;;
    if (txGetAsyncKeyState (VK_TAB))   s->r =  s->r + 1;
    if (txGetAsyncKeyState (VK_SHIFT)) s->r =  s->r - 1;
}
void PressKey(Sczchzshkharrrr* s)
{
    if (txGetAsyncKeyState (0x41))  s->vx = s->vx - 1;
    if (txGetAsyncKeyState (0x44))  s->vx = s->vx + 1;
    if (txGetAsyncKeyState (0x57))  s->vy = s->vy + 1;
    if (txGetAsyncKeyState (0x53))  s->vy = s->vy - 1;
    if (txGetAsyncKeyState (VK_LCONTROL)) s->vy = 0,  s->vx = 0;
}

double Distane (double  x1, double  y1, double  x2, double  y2)
{
    double dist = sqrt ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return dist;
}
