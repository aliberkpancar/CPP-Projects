#include "dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog is created..." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog is created..." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->type = copy.type;
	std::cout << "Dog is copied..." << std::endl;
}

Dog& Dog::operator=(const Dog& oper)
{
	if (this != &oper)
		this->type = oper.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog is destroyed..." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Hav... Hav..." << std::endl;
}
