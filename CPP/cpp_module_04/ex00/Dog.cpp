
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog &copy) : Animal(copy) {}

Dog &Dog::operator=(const Dog &dog)
{
    if (this == &dog)
        return (*this);
    Animal::operator=(dog);
    return (*this);
}

Dog::~Dog() {}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
