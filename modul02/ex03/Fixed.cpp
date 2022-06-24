#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_value(0)
{}
Fixed::Fixed(const Fixed & ref_Fixed)
{
    fixed_value = ref_Fixed.getRawBits();
}
Fixed & Fixed::operator=(const Fixed & fixed)
{
    if (this != &fixed)
    {
        this->fixed_value = fixed.getRawBits();
    }
    else
        std::cout << "Self-assignment is here" << std::endl;
    return *this;
}
Fixed::~Fixed()
{}
int  Fixed::getRawBits(void ) const
{
    return this->fixed_value;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
}



Fixed::Fixed(const int value)
{
    fixed_value = (int )value << fractional_bits;
}
Fixed::Fixed(const float value)
{
    fixed_value = (round(value * (1 << fractional_bits)));
}
float Fixed::toFloat(void ) const
{
    return (float)fixed_value/(1 << fractional_bits);
}
int Fixed::toInt(void ) const
{
    return (fixed_value >> fractional_bits);
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed)
{
    out << fixed.toFloat();
    return out;
}



bool Fixed::operator!=(const Fixed & fixed)
{
    return fixed_value != fixed.fixed_value;
}
//    bool Fixed::operator!=(Fixed const& lhs, Fixed const& rhs)
//    {
//        return !(lhs.fixed_value == rhs.fixed_value);
//    }
bool Fixed::operator==(const Fixed & fixed)
{
    return fixed_value == fixed.fixed_value;
}
bool Fixed::operator>(const Fixed & fixed)
{
    return fixed_value > fixed.fixed_value;
}
bool Fixed::operator<(const Fixed & fixed)
{
    return fixed_value < fixed.fixed_value;
}
bool Fixed::operator>=(const Fixed & fixed)
{
    return fixed_value >= fixed.fixed_value;
}
bool Fixed::operator<=(const Fixed & fixed)
{
    return fixed_value <= fixed.fixed_value;
}
Fixed Fixed::operator+(const Fixed & fixed)
{
    Fixed plus;
    plus.fixed_value = fixed_value + fixed.fixed_value;
    return plus;
}
Fixed Fixed::operator-(const Fixed & fixed)
{
    Fixed minus;
    minus.fixed_value = fixed_value - fixed.fixed_value;
    return minus;
}
Fixed Fixed::operator/(const Fixed & fixed)
{
    Fixed divide;
    divide.fixed_value = fixed_value * pow(2, fractional_bits)/fixed.fixed_value;
    return divide;
}
Fixed Fixed::operator*(const Fixed & fixed)
{
    Fixed myltuply;
    myltuply.fixed_value = fixed_value *fixed.fixed_value/(1 << fractional_bits);
    return myltuply;
}
Fixed Fixed::operator++()
{
//        preincrement
    ++fixed_value;
    return *this;
}
Fixed Fixed::operator--()
{
//        preidecrement
    --fixed_value;
    return *this;
}
Fixed Fixed::operator++(int )
{
//        posteincrement
    Fixed oldvalue;
    oldvalue.fixed_value = fixed_value;
    fixed_value++;
    return oldvalue;
}
Fixed Fixed::operator--(int )
{
//        postdecrement
    Fixed oldvalue;
    oldvalue.fixed_value = fixed_value;
    fixed_value--;
    return oldvalue;
}
Fixed & Fixed::min(Fixed & fix1, Fixed & fix2)
{
    if (fix1 >= fix2)
        return fix2;
    return fix1;
}
Fixed & Fixed::max(Fixed & fix1, Fixed & fix2)
{
    if (fix1 >= fix2)
        return fix1;
    return fix2;
}
const Fixed & Fixed::min(const Fixed & fix1, const Fixed & fix2)
{
    if ((Fixed&)fix1 >= (Fixed&)fix2)
        return fix2;
    return fix1;
}
const Fixed & Fixed::max(const Fixed & fix1, const Fixed & fix2)
{
    if ((Fixed&)fix1 >= (Fixed&)fix2)
        return fix1;
    return fix2;
}
