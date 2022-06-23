#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name): name(name)
{}

Zombie::~Zombie()
{
    std::cout << this->name << ": i'mmm deeeeaad..." << std::endl;
}

void Zombie::announce(void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::get_name(std::string name)
{
    this->name = name;
}
