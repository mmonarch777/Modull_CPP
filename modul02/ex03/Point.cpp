#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(const Point & ref_Point): x(ref_Point.getx()), y(ref_Point.gety()){};

Point::Point(): x(0), y(0){}

Point::Point(Fixed const x, Fixed const y): x(x), y(y){}

Point::~Point(){}

Fixed Point::getx(void )const
{
    return this->x;
}
Fixed Point::gety(void )const
{
    return this->y;
}