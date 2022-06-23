#include "Fixed.hpp"

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
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_value;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
}
