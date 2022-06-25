#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & other);
    ~DiamondTrap();
    DiamondTrap & operator=(const DiamondTrap & other);

    void attack(const std::string & target);
    std::string get_NAME(void );
    void whoAm(void );

};

#endif
