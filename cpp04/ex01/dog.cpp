#include "dog.hpp"

Dog::Dog() : Animal("Dog"), d_brain(new Brain())
{
	std::cout << "Dog is created..." << std::endl;
}

Dog::Dog(std::string type) : Animal(type), d_brain(new Brain())
{
	std::cout << "Dog is created..." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy), d_brain(new Brain(*copy.d_brain))
{
	std::cout << "Dog is copied..." << std::endl;
}

Dog& Dog::operator=(const Dog& oper)
{
	if (this != &oper)
	{
		Animal::operator=(oper);
		delete d_brain;
		d_brain = new Brain(*oper.d_brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete d_brain;
	std::cout << "Dog is destroyed..." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Hav... Hav..." << std::endl;
}
