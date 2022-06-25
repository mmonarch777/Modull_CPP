#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "------------------------------------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "------------------------------------------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "------------------------------------------" << std::endl;
    delete i;
    delete j;
    delete meta;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << "------------------------------------------" << std::endl;

    std::cout << wrong_i->getType() << " " << std::endl;
    wrong_i->makeSound(); //will output the cat sound!
    wrong_meta->makeSound();
    std::cout << "------------------------------------------" << std::endl;
    delete wrong_i;
    delete wrong_meta;
    return 0;
}