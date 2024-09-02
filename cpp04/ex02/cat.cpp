#include "cat.hpp"

Cat::Cat() : Animal("Cat"), c_brain(new Brain())
{
	std::cout << "Cat is created..." << std::endl;
}

Cat::Cat(std::string type) : Animal(type), c_brain(new Brain())
{
	std::cout << "Cat is created..." << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy), c_brain(new Brain(*copy.c_brain))
{
	this->type = copy.type;
	std::cout << "Cat is copied..." << std::endl;
}

Cat& Cat::operator=(const Cat& oper)
{
	if (this != &oper)
	{
		this->type = oper.type;
		delete c_brain;
		c_brain = new Brain(*oper.c_brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete c_brain;
	std::cout << "Cat is destroyed..." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miyavvv..." << std::endl;
}
