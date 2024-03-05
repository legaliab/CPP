
#include "Animal.hpp"


#include "Animal.hpp"

Animal::Animal() : type("Animal") {}

Animal::Animal(const Animal &copy) : type(copy.type) {}

Animal &Animal::operator=(const Animal &animal)
{
    if (this == &animal)
        return (*this);
    type = animal.type;
    return (*this);
}

Animal::~Animal() {}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
