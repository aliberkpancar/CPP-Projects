#include "animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal is created..." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal is created..." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal's copy constructor is called..." << std::endl;
}

Animal&	Animal::operator=(const Animal& oper)
{
	if (this != &oper)
		type = oper.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal is destroyed..." << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal a sound" << std::endl;
}