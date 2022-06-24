#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(): fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed & ref_Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_value = ref_Fixed.getRawBits();
}
Fixed & Fixed::operator=(const Fixed & fixed)
{
    if (this != &fixed)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        fixed_value = fixed.getRawBits();
    }
    else
        std::cout << "Self-assignment is here" << std::endl;
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
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
    std::cout << "Int constructor called" << std::endl;
    fixed_value = (int )value << fractional_bits;

}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_value = (round(value * (1 << fractional_bits)));
}
float Fixed::toFloat(void ) const
{
    return (float)fixed_value/(1 << fractional_bits);
}
int Fixed::toInt(void ) const
{
    return fixed_value >> fractional_bits;
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed)
{
    out << fixed.toFloat();
    return out;
}
