#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created..." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed..." << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& oper)
{
	if (this != &oper)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = oper.ideas[i];
	}
	return (*this);
}