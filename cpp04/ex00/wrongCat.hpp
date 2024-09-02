#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
					WrongCat();
					WrongCat(std::string type);
					WrongCat(const WrongCat& copy);
		WrongCat&	operator=(const WrongCat& oper);
		virtual		~WrongCat();
		void		makeSound() const;
};

#endif