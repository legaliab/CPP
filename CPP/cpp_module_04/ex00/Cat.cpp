
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const Cat &copy) : Animal(copy) {}

Cat &Cat::operator=(const Cat &cat)
{
    if (this == &cat)
        return (*this);
    Animal::operator=(cat);
    return (*this);
}

Cat::~Cat() {}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
