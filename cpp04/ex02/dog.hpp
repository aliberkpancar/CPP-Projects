#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		Brain* d_brain;
	public:
				Dog();
				Dog(std::string type);
				Dog(const Dog& copy);
		Dog&	operator=(const Dog& oper);
		virtual ~Dog();
		void	makeSound() const;
};

#endif
