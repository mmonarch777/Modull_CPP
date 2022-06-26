#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
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
    int len = 10;
    const Animal *arrAnimal[len];
    std::cout << "------------------------------------------" << std::endl;
    for (int i = 0; i < len/2; i++)
        arrAnimal[i] = new Cat("mr");
    for (int i = len/2; i < len; i++)
        arrAnimal[i] = new Dog("gr");
    std::cout << "------------------------------------------" << std::endl;
    arrAnimal[3]->makeSound();
    arrAnimal[8]->makeSound();
    std::cout << "------------------------------------------" << std::endl;
    for (int i = len - 1; i >= 0; i--)
        delete arrAnimal[i];
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
//    const WrongAnimal* wrong_meta = new WrongAnimal();
//    const WrongAnimal* wrong_i = new WrongCat();
//    std::cout << "------------------------------------------" << std::endl;
//
//    std::cout << wrong_i->getType() << " " << std::endl;
//    wrong_i->makeSound(); //will output the cat sound!
//    wrong_meta->makeSound();
//    std::cout << "------------------------------------------" << std::endl;
//    delete wrong_i;
//    delete wrong_meta;
    return 0;
}