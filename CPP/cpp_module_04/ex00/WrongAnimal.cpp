
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    if (this == &cat)
        return (*this);
    WrongAnimal::operator=(cat);
    return (*this);
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
