//! @file 3day.cpp
//! @mainpage
//! @section SUER Doxygen Super
//! -# @ref txMyTriangle
//! -# @ref DrawTree
//! -# @ref DrawPlane1
//! -# @ref DrawPlane2
//! -# @ref DrawBIRD
//! -# @ref RightturnBIRD
//! -# @ref LeftturnBIRD
//! -# @ref BIRDWingsUP
//! -# @ref FlyPlane1
//! -# @ref FlyPlane2
//! -# @ref LandingPlane
//! -# @ref Titry_Samolet
//! -# @ref Titry_Begin
//! -# @ref BIRDUP
//! -# @ref BIRDLEFT
//! -# @ref BIRDRIGHT
//! -# @ref BIRDMAX
//! -# @ref BIRDMIN
//! -# @ref BIRDVSE

#include "TXLib.h"

//=================================================================================================================
//{          Initialization
//! @name    ������������� ����������
//=================================================================================================================
//=================================================================================================================
//{          Drawing
//! @name    ��������� �����
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������� ������ �����������.
//!
//! @param   x1  X-���������� 1-� �����.
//! @param   y1  Y-���������� 1-� �����.
//! @param   x2  X-���������� 2-� �����.
//! @param   y2  Y-���������� 2-� �����.
//! @param   x3  X-���������� 3-� �����.
//! @param   y3  Y-���������� 3-� �����.
//! @param   color
//!
//! @see     DrawTree
//!
//}----------------------------------------------------------------------------------------------------------------

void txMyTriangle (double x1, double y1, double x2, double y2, double x3, double y3,
                    COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ���� �� 5 ������������� � ������ � ������������ (100, 580, 110, 600).
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   posY  Y-���������� ������ �� ��������� �����.
//!
//! @see     DrawTree
//!
//}----------------------------------------------------------------------------------------------------------------

void DrawTree     (int posX, int posY);


//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ������� ��� �����.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   color �������� ���� ��������, �� �������� ���� ������ �����.
//!
//! @see     FlyPlane1
//!
//}----------------------------------------------------------------------------------------------------------------

void DrawPlane1   (int posX, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ������� ��� ������.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   color �������� ���� ��������, �� �������� ���� ������ �����.
//!
//! @see     FlyPlane2, LandingPlane
//!
//}----------------------------------------------------------------------------------------------------------------

void DrawPlane2   (int posX, COLORREF color);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ����� ��� ������.
//!
//! @param   X0         X-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   Y0         Y-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   zoomX      ���������� ��������� ������� ����� �� ��� �.
//! @param   zoomY      ���������� ��������� ������� ����� �� ��� Y.
//! @param   color_body �������� ���� �������� � ������.
//! @param   color_wing �������� ���� �����, ������� � ������.
//!
//! @see     RightturnBIRD, LeftturnBIRD, BIRDWingsUP
//!
//}----------------------------------------------------------------------------------------------------------------

void DrawBIRD     (double X0, double Y0, double zoomX, double zoomY, COLORREF color_body,
                    COLORREF color_wing);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ����� �������� ������ ������ ���, ������.
//!
//! @param   X0         X-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   Y0         Y-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   zoomX      ���������� ��������� ������� ����� �� ��� �.
//! @param   zoomY      ���������� ��������� ������� ����� �� ��� Y.
//! @param   color_body �������� ���� �������� � ������.
//! @param   color_wing �������� ���� �����, ������� � ������.
//!
//! @see     DrawBIRD, LeftturnBIRD, BIRDWingsUP
//!
//}----------------------------------------------------------------------------------------------------------------

void RightturnBIRD(double X0, double Y0, double zoomX, double zoomY, COLORREF color_body,
                    COLORREF color_wing);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ����� �������� ������ �����, ��� ������.
//!
//! @param   X0         X-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   Y0         Y-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   zoomX      ���������� ��������� ������� ����� �� ��� �.
//! @param   zoomY      ���������� ��������� ������� ����� �� ��� Y.
//! @param   color_body �������� ���� �������� � ������.
//! @param   color_wing �������� ���� �����, ������� � ������.
//!
//! @see     DrawBIRD, RightturnBIRD, BIRDWingsUP
//!
//}----------------------------------------------------------------------------------------------------------------

void LeftturnBIRD (double X0, double Y0, double zoomX, double zoomY, COLORREF color_body,
                    COLORREF color_wing);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup Drawing
//! @brief   �������, ������ ����� � �������� ��������� �����, ��� ������.
//!
//! @param   X0         X-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   Y0         Y-���������� ��������� ����� (����� ������ ������������� �������� �����).
//! @param   zoomX      ���������� ��������� ������� ����� �� ��� �.
//! @param   zoomY      ���������� ��������� ������� ����� �� ��� Y.
//! @param   color_body �������� ���� �������� � ������.
//! @param   color_wing �������� ���� �����, ������� � ������.
//!
//! @see     DrawBIRD, RightturnBIRD, BIRDWingsUP
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDWingsUP  (double X0, double Y0, double zoomX, double zoomY, COLORREF color_body,
                    COLORREF color_wing);
//! @}
//}

//=================================================================================================================
//{          AirPlane
//! @name    ������� ������ � ���������
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
//! @ingroup AirPlane
//! @brief   �������, ������� ������������ ����� �������� ��� �����.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   PAuse ����� �������� ����� � ������������.
//!
//! @see     DrawPlane1
//!
//}----------------------------------------------------------------------------------------------------------------

void FlyPlane1    (int posX,int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup AirPlane
//! @brief   �������, ������� ������������ ����������� �������� ��� ������.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   PAuse ����� �������� ����� � ������������.
//!
//! @see     DrawPlane2
//!
//}----------------------------------------------------------------------------------------------------------------

void FlyPlane2    (int posX,int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup AirPlane
//! @brief   �������, ������� ������������ ��������� ������� ����� ����������� �������� ��� ������.
//!
//! @param   PAuse ����� �������� ����� � ������������.
//!
//! @see     DrawPlane2, Plane2
//!
//}----------------------------------------------------------------------------------------------------------------

void LandingPlane (int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup AirPlane
//! @brief   ������� ������ ������ ����� ����� � ���������.
//!
//! @param   pos   ���������� ������ �� ��������� �����.
//! @param   PAuse ����� �������� ����� � ������������.
//!
//}----------------------------------------------------------------------------------------------------------------

void Titry_Samolet(int pos,int PAuse);
//! @}
//}

void Titry_Begin  (int pos,int PAuse);

//=================================================================================================================
//{          BIRD
//! @name    ������� ������������ � ��������� ������� �����
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ������������ ������������ ����� �����.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   posY  Y-���������� ������ �� ��������� �����.
//! @param   PAuse ����� �������� ����� � ������������.
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDUP       (int posX, int posY,int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ������������ ������������ ����� �����.
//!
//! @param   posX  X-���������� ������ �� ��������� �����.
//! @param   posY  Y-���������� ������ �� ��������� �����.
//! @param   PAuse ����� �������� ����� � ������������.
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------


void BIRDLEFT     (int posX, int posY,int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ������������ ������������ ����� ������.
//!
//! @param   posX   X-���������� ������ �� ��������� �����.
//! @param   posY   Y-���������� ������ �� ��������� �����.
//! @param   XCONST X-���������� �� ������� ��������� �����.
//! @param   PAuse  ����� �������� ����� � ������������.
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDRIGHT    (int posX, int posY, int XCONST, int PAuse);

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ����������� ������ �����.
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDMAX      ();

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ���������� ������� �����
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDMIN      ();

//{----------------------------------------------------------------------------------------------------------------
//! @ingroup BIRD
//! @brief   ������� ��������� ������������� �����.
//!
//! @see     DrawBIRD, BIRDUP, BIRDLEFT, BIRDRIGHT, BIRDMAX, BIRDMIN, BIRDVSE
//!
//}----------------------------------------------------------------------------------------------------------------

void BIRDVSE      ();
//! @}
//}
//! @}
//}
//-----------------------------------------------------------------------------

int main()
    {
    txCreateWindow ( 800, 600);
    txBegin();

    Titry_Begin    ( 800,  80);
    FlyPlane1      (   0, 100);
    FlyPlane2      (-300, 100);
    LandingPlane   ( 100);
    Titry_Samolet  (   0, 100);
    BIRDUP         ( 400, 700,  80);
    BIRDRIGHT      ( 400, 300, 700,  80);
    BIRDLEFT       ( 700, 300,  80);
    BIRDRIGHT      ( 100, 300, 400,  80);
    BIRDMAX        ();
    BIRDMIN        ();
    BIRDVSE        ();
    }

//{----------------------------------------------------------------------------
void DrawTree       (int posX, int posY)
   {
    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle    (100+posX, 580+posY, 110+posX, 600+posY);
    txMyTriangle   ( 60+posX, 580+posY,  80+posX, 530+posY, 105+posX, 580+posY, TX_GREEN);
    txMyTriangle   ( 80+posX, 530+posY, 105+posX, 580+posY, 130+posX, 530+posY, TX_GREEN);
    txMyTriangle   (105+posX, 580+posY, 130+posX, 530+posY, 150+posX, 580+posY, TX_GREEN);
    txMyTriangle   ( 70+posX, 530+posY, 105+posX, 490+posY, 140+posX, 530+posY, TX_GREEN);
    txMyTriangle   ( 85+posX, 490+posY, 105+posX, 450+posY, 125+posX, 490+posY, TX_GREEN);
   }

//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void DrawPlane1   (int posX, COLORREF color)
    {
    txSetFillColor (color);
    txEllipse (100+posX,  80, 120+posX, 130);
    txEllipse (100+posX, 100, 300+posX, 140);
    txEllipse (200+posX, 120, 250+posX, 130);
    txEllipse (295+posX,  90, 305+posX, 150);
    txCircle  (300+posX, 120,   5                 );
    txEllipse (100+posX, 110, 140+posX, 130);
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void DrawPlane2   (int posX, COLORREF color)
   {
    txSetFillColor (color);
    txEllipse (200+posX,  40, 240+posX, 200);
    txEllipse (100+posX,  80, 120+posX, 160);
    txEllipse (100+posX, 100, 300+posX, 140);
    txEllipse (295+posX,  90, 305+posX, 150);
    txCircle  (300+posX, 120,   5                 );
    txEllipse (100+posX, 110, 140+posX, 130);
    }
//}----------------------------------------------------------------------------

//{-----------------------------------------------------------------------------

void txMyTriangle (double x1, double y1, double x2, double y2, double x3, double y3,
                   COLORREF color)
   {
    txSetColor      (color);
    txSetFillColor  (color);
    POINT MyTriangle[3] = {{x1, y1}, {x2, y2}, {x3, y3}};
    txPolygon       (MyTriangle, 3);
   }
//}-----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void FlyPlane1     (int posX,int PAuse)
    {
    int posY = 0;
    while   (posX < 600)
        {
        txSetFillColor (TX_BLACK);
        txClear();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 40);
        txTextOut   (50, 50, "V NEPOGODE LETIT SAMOLET");
        txSetColor     (TX_YELLOW,5);
        DrawPlane1(posX,TX_PINK);
        DrawTree      (0-posX, posY);
        DrawTree      (100-posX, posY+10);
        DrawTree      (200-posX, posY-10);
        DrawTree      (300-posX, posY-20);
        DrawTree      (400-posX, posY+10);
        posX += 10;
        txSleep   (PAuse);
       }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void FlyPlane2     (int posX,int PAuse)
    {
    while   (posX < 200)
        {
        txSetFillColor (TX_BLACK);
        txClear();
        txSetColor  (TX_YELLOW);
        txSelectFont("Comic Sans MS", 40);
        txTextOut   (50, 50, "PROISHODIT POSADKA SAMOLETA");
        txSetColor     (TX_YELLOW,5);
        txLine      (  0,  20, 800,  00);
        txLine      (  0, 320, 800, 300);
        DrawPlane2  (posX,TX_PINK);
        posX += 10;
        txSleep     (PAuse);
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void LandingPlane (int PAuse)
    {
    int i = 0;
    while   (i < 20)
        {
        txSetFillColor (TX_BLACK);
        txClear();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 40);
        txTextOut   (100, 500, "VYSADKA PASSAJIROV PROSHLA SHTATNO");
        txSetColor     (TX_YELLOW,5);
        txLine    (  0,  20, 800,  00);
        txLine    (  0, 320, 800, 300);
        DrawPlane2(200,TX_PINK);
        txCircle  (450, 160+i*10    ,   5     );
        txCircle  (460, 160+(i+1)*10,   5     );
        txCircle  (440, 160+(i+1)*10,   5     );
        txCircle  (445, 160+(i+2)*10,   5     );
        txCircle  (465, 160+(i+2)*10,   5     );
        txCircle  (455, 160+(i+2)*10,   5     );
        i++;
        txSleep   (PAuse);
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void    DrawBIRD(double X0, double Y0, double zoomX, double zoomY, COLORREF color_body, COLORREF color_wing)
    {
    txSetFillColor (color_body);
    txEllipse       (X0 - 10*zoomX, Y0 - 30*zoomY, X0 + 10*zoomX, Y0 + 30*zoomY);
    txCircle        (X0 -  1      , Y0 - 35*zoomY,       5*zoomX               );
    txMyTriangle    (X0 -  5*zoomX, Y0 - 40*zoomY-5*zoomY/2, X0 +  5*zoomX/2, Y0 - 40*zoomY-5*zoomY/2,  X0           , Y0 - 50*zoomY-5*zoomY, color_wing);//����
    txMyTriangle    (X0 - 60*zoomX, Y0 -  5*zoomY, X0 - 10*zoomX, Y0 - 25*zoomY,  X0 - 10*zoomX, Y0 + 15*zoomY, color_wing);//����� �����
    txMyTriangle    (X0 + 60*zoomX, Y0 -  5*zoomY, X0 + 10*zoomX, Y0 - 25*zoomY,  X0 + 10*zoomX, Y0 + 15*zoomY, color_wing);//������ �����
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 - 15*zoomX, Y0 + 50*zoomY,  X0 - 10*zoomX, Y0 + 60*zoomY, color_wing);//����� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 -  5*zoomX, Y0 + 60*zoomY,  X0 +  5*zoomX, Y0 + 60*zoomY, color_wing);//������� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 + 10*zoomX, Y0 + 60*zoomY,  X0 + 15*zoomX, Y0 + 50*zoomY, color_wing);//������ ������ ������
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void    RightturnBIRD(double X0, double Y0, double zoomX, double zoomY, COLORREF color_body, COLORREF color_wing)
    {
    txSetFillColor (color_body);
    txEllipse       (X0 - 10*zoomX, Y0 - 30*zoomY, X0 + 10*zoomX, Y0 + 30*zoomY);
    txCircle        (X0 -  1      , Y0 - 35*zoomY,       5*zoomX               );
    txMyTriangle    (X0 -  5*zoomX, Y0 - 40*zoomY-5*zoomY/2, X0 +  5*zoomX/2, Y0 - 40*zoomY-5*zoomY/2,  X0 + 5        , Y0 - 50*zoomY-5*zoomY, color_wing);//����
    txMyTriangle    (X0 - 60*zoomX, Y0 - 25*zoomY, X0 - 10*zoomX, Y0 - 25*zoomY,  X0 - 10*zoomX, Y0 + 15*zoomY, color_wing);//����� �����
    txMyTriangle    (X0 + 40*zoomX, Y0 -  5*zoomY, X0 + 10*zoomX, Y0 - 25*zoomY,  X0 + 10*zoomX, Y0 + 15*zoomY, color_wing);//������ �����
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 -  5*zoomX, Y0 + 60*zoomY,  X0 +  5*zoomX, Y0 + 60*zoomY, color_wing);//����� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 + 10*zoomX, Y0 + 60*zoomY,  X0 + 15*zoomX, Y0 + 50*zoomY, color_wing);//������� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 + 20*zoomX, Y0 + 50*zoomY,  X0 + 25*zoomX, Y0 + 40*zoomY, color_wing);//������ ������ ������
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void LeftturnBIRD(double X0, double Y0, double zoomX, double zoomY, COLORREF color_body, COLORREF color_wing)
    {
    txSetFillColor (color_body);
    txEllipse       (X0 - 10*zoomX, Y0 - 30*zoomY, X0 + 10*zoomX, Y0 + 30*zoomY);
    txCircle        (X0 -  1      , Y0 - 35*zoomY,       5*zoomX               );
    txMyTriangle    (X0 -  5*zoomX, Y0 - 40*zoomY-5*zoomY/2, X0 +  5*zoomX/2, Y0 - 40*zoomY-5*zoomY/2,  X0 -5          , Y0 - 50*zoomY-5*zoomY, color_wing);//����
    txMyTriangle    (X0 - 40*zoomX, Y0 -  5*zoomY, X0 - 10*zoomX, Y0 - 25*zoomY,  X0 - 10*zoomX, Y0 + 15*zoomY, color_wing);//����� �����
    txMyTriangle    (X0 + 60*zoomX, Y0 - 25*zoomY, X0 + 10*zoomX, Y0 - 25*zoomY,  X0 + 10*zoomX, Y0 + 15*zoomY, color_wing);//������ �����
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 - 15*zoomX, Y0 + 50*zoomY,  X0 - 10*zoomX, Y0 + 60*zoomY, color_wing);//����� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 -  5*zoomX, Y0 + 60*zoomY,  X0 +  5*zoomX, Y0 + 60*zoomY, color_wing);//������� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 - 20*zoomX, Y0 + 50*zoomY,  X0 - 25*zoomX, Y0 + 40*zoomY, color_wing);//������ ������ ������
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDWingsUP  (double X0, double Y0, double zoomX, double zoomY, COLORREF color_body, COLORREF color_wing)
    {
    txSetFillColor (color_body);
    txEllipse       (X0 - 10*zoomX, Y0 - 30*zoomY, X0 + 10*zoomX, Y0 + 30*zoomY);
    txCircle        (X0 -  1      , Y0 - 35*zoomY,       5*zoomX               );
    txMyTriangle    (X0 -  5*zoomX, Y0 - 40*zoomY-5*zoomY/2, X0 +  5*zoomX/2, Y0 - 40*zoomY-5*zoomY/2,  X0           , Y0 - 50*zoomY-5*zoomY, color_wing);//����
    txMyTriangle    (X0 - 60*zoomX, Y0 - 25*zoomY, X0 - 10*zoomX, Y0 - 25*zoomY,  X0 - 10*zoomX, Y0 + 15*zoomY, color_wing);//����� �����
    txMyTriangle    (X0 + 60*zoomX, Y0 - 25*zoomY, X0 + 10*zoomX, Y0 - 25*zoomY,  X0 + 10*zoomX, Y0 + 15*zoomY, color_wing);//������ �����
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 - 15*zoomX, Y0 + 50*zoomY,  X0 - 10*zoomX, Y0 + 60*zoomY, color_wing);//����� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 -  5*zoomX, Y0 + 60*zoomY,  X0 +  5*zoomX, Y0 + 60*zoomY, color_wing);//������� ������ ������
    txMyTriangle    (X0           , Y0 + 30*zoomY, X0 + 10*zoomX, Y0 + 60*zoomY,  X0 + 15*zoomX, Y0 + 50*zoomY, color_wing);//������ ������ ������
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void Titry_Begin  (int pos,int PAuse)
    {
    while  (pos > -200)
       {
       txSetFillColor (TX_BLACK);
       txClear     ();
       txSetColor (TX_YELLOW);
       txSelectFont("Comic Sans MS", 20);
       txTextOut   (100,    pos, "�� ������ ���� ����ѻ: � ��������� ����� ��������� ���������� ����� 20-25 �/�") ;
       txTextOut   (100, pos+20, "��� �������� ����� ������������� ���������� ����� �� ������, ��������� � ����������.");
       txTextOut   (100, pos+40, "����� ����� ��� ������ �������� ����� � �� ��������� �� ��� ���������. ") ;
       pos -= 5;
       txSleep     (PAuse);
       }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void Titry_Samolet(int pos,int PAuse)
    {
    while  (pos < 300)
        {
        txSetFillColor (TX_BLACK);
        txClear     ();
        txSelectFont("Comic Sans MS", 40);
        txTextOut   (pos,    pos, "SAMOLET SMOG PRIZEMLITSYIA") ;
        txTextOut   (pos, pos+60, "SLEDITE ZA POGODNYMI YAVLENIYAMI") ;
        pos+=10;
        txSleep     (PAuse);
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDUP       (int posX, int posY,int PAuse)
    {
    while  (posY >= 300)
        {
        txSetFillColor (TX_BLACK);
        txClear     ();
        txSetColor  (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        BIRDWingsUP (posX, posY+5,  1,  1, TX_YELLOW, TX_GREEN);
        txSleep     (PAuse);
        txSetFillColor (TX_BLACK);
        txClear     ();
        txSetColor  (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        DrawBIRD    (posX, posY,  1,  1, TX_YELLOW, TX_GREEN);
        txSleep     (PAuse);
        posY -= 10;
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDRIGHT     (int posX, int posY, int XCONST,int PAuse)
    {
    while  (posX < XCONST)
        {
        txSetFillColor  (TX_BLACK);
        txClear         ();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        RightturnBIRD   (posX, posY,  1,  1, TX_YELLOW, TX_GREEN);
        txSleep         (PAuse);
        posX += 10;
        }
    DrawBIRD    (posX, posY,  1,  1, TX_YELLOW, TX_GREEN);
    txSleep     (PAuse);
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDLEFT    (int posX, int posY,int PAuse)
    {
    while  (posX >= 100)
        {
        txSetFillColor (TX_BLACK);
        txClear      ();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        LeftturnBIRD (posX, posY,  1,  1, TX_YELLOW, TX_GREEN);
        txSleep      (PAuse);
        posX -= 10;
        }
    DrawBIRD    (posX, posY,  1,  1, TX_YELLOW, TX_GREEN);
    txSleep     (PAuse);
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDMAX      ()
    {
    int i = 0;
    while  (i <= 10)
        {
        txSetFillColor (TX_BLACK);
        txClear     ();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        DrawBIRD    (400, 300,  1+i,  1+i, TX_YELLOW, TX_GREEN);
        txSleep     (50);
        i++;
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDMIN     ()
    {
    int i = 11;
    while  (i >0)
        {
        txSetFillColor (TX_BLACK);
        txClear     ();
        txSetColor (TX_YELLOW);
        txSelectFont("Comic Sans MS", 30);
        txTextOut   (50, 50, "� ����� ����� ���� ��������� ������ ������");
        DrawBIRD    (400, 300,  i,  i, TX_YELLOW, TX_GREEN);
        txSleep     (50);
        i--;
        }
    }
//}----------------------------------------------------------------------------

//{----------------------------------------------------------------------------
void BIRDVSE      ()
    {
    DrawBIRD      (400, 300,  1,  1, TX_YELLOW, TX_GREEN);
    txSleep       (50);
    RightturnBIRD (400, 300,  1,  1, TX_YELLOW, TX_GREEN);
    LeftturnBIRD  (400, 300,  1,  1, TX_YELLOW, TX_GREEN);
    txSleep       (50);
    txSetColor (TX_YELLOW);
    txSelectFont("Comic Sans MS", 40);
    txTextOut   (300, 400, "PTYCA NE VZLETELO");
    }
//}----------------------------------------------------------------------------








