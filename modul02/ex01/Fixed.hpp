#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 fixed_value;
    static const int    fractional_bits;

public:

    Fixed();
    Fixed(const Fixed & ref_Fixed);
    Fixed & operator=(const Fixed & fixed);
    ~Fixed();
    int  getRawBits(void ) const;
    void setRawBits(int const raw);


    Fixed(const int value);
    Fixed(const float value);
    float toFloat(void ) const;
    int toInt(void ) const;

};

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);

#endif