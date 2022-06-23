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
//-----------------------------------------------
    Fixed(const int value);
    Fixed(const float value);
    float toFloat(void ) const;
    int toInt(void ) const;
//-----------------------------------------------
    bool operator!=(const Fixed & fixed);
//    bool operator!=(Fixed const& lhs, Fixed const& rhs);
    bool operator==(const Fixed & fixed);
    bool operator>(const Fixed & fixed);
    bool operator<(const Fixed & fixed);
    bool operator>=(const Fixed & fixed);
    bool operator<=(const Fixed & fixed);

    Fixed operator+(const Fixed & fixed);
    Fixed operator-(const Fixed & fixed);
    Fixed operator/(const Fixed & fixed);
    Fixed operator*(const Fixed & fixed);

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int );
    Fixed operator--(int );

    static Fixed & min(Fixed & fix1, Fixed & fix2);
    static Fixed & max(Fixed & fix1, Fixed & fix2);
    static const Fixed & min(const Fixed & fix1, const Fixed & fix2);
    static const Fixed & max(const Fixed & fix1, const Fixed & fix2);

};

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);

#endif