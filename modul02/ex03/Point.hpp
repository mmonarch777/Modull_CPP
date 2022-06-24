#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"


class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(Fixed const x, Fixed const y);
    Point(const Point & ref_Point);
    ~Point();

    Fixed getx(void )const;
    Fixed gety(void )const;


};

#endif