#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
    getType();
}

Weapon::~Weapon(){}

void Weapon::setType(std::string  type)
{
    this->type = type;
}

std::string Weapon::getType(void )
{
    return this->type;
}
