#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class	Dog : public Animal
{
	public:
				Dog();
				Dog(std::string type);
				Dog(const Dog& copy);
		Dog&	operator=(const Dog& oper);
		virtual	~Dog();
		void	makeSound() const;
};

#endif