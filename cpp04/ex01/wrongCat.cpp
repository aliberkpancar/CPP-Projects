#include "wrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat is created..." << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat is created..." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	this->type = copy.type;
	std::cout << "WrongCat is copied..." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& oper)
{
	if (this != &oper)
		this->type = oper.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destroyed..." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\033[1;31mHav...Hav...\033[0m" << std::endl;
}
