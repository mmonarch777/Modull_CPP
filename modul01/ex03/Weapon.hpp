#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string  type);
    std::string getType(void );

private:
    std::string type;
};

#endif