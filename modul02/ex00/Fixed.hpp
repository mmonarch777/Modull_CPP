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

};

#endif