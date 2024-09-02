#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat is created..." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat is created..." << std::endl;
}

Cat::Cat(const Cat& copy)
{
	this->type = copy.type;
	std::cout << "Cat is copied..." << std::endl;
}

Cat& Cat::operator=(const Cat& oper)
{
	if (this != &oper)
		this->type = oper.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat is destroyed..." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miyavvv..." << std::endl;
}
