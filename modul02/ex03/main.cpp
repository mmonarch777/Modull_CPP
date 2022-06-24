#include "Fixed.hpp"
#include "Point.hpp"

int     check(Point a, Point b, Point c, Point p);

int main(void )
{
    Point a(7, 7);
    Point b(11,1);
    Point c(2, 2);
    Point p(3,3);

    int ret = 0;
    ret = check(a,b,c,p);
    if (ret == 2)
        std::cout << "Point inside the triangle." << std::endl;
    else if (ret == 1)
        std::cout << "Point on the side of a triangle." << std::endl;
    else
        std::cout << "Point outside the triangle." << std::endl;
    return 0;
}
