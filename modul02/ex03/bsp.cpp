#include "Fixed.hpp"
#include "Point.hpp"

//get_z: if you are interested, read about
// the multiplication of vectors given by Cartesian coordinates)))

Fixed get_z(Point x, Point y, Point yp)
{
    Point xy(y.getx()-x.getx(), y.gety()-x.gety());
    Point xyp(yp.getx()-x.getx(), yp.gety()-x.gety());

    Fixed z(xy.getx()*xyp.gety() - xy.gety()*xyp.getx());

    return z;
}

int     check(Point a, Point b, Point c, Point p)
{
    Fixed A = get_z(a, b, p);
    Fixed B = get_z(b, c, p);
    Fixed C = get_z(c, a, p);
    if ((A < 0 && B < 0 && C < 0) || (A > 0 && B > 0 && C > 0))
        return 2;
    else if (A == 0 && ((B > 0 && C > 0) || (B < 0 && C < 0)))
        return 1;
    else if (B == 0 && ((A > 0 && C > 0) || (A < 0 && C < 0)))
        return 1;
    else if (C == 0 && ((B > 0 && A > 0) || (B < 0 && A < 0)))
        return 1;
    else
        return 0;
}
